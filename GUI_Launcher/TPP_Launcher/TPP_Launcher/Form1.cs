using System;
using System.Diagnostics;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace TPP_Launcher
{
    public partial class Form1 : Form
    {
        ProcessStartInfo processStartInfo = new ProcessStartInfo("toki_pona.exe");

        public Form1()
        {
            InitializeComponent();

            processStartInfo.UseShellExecute = false;
            processStartInfo.CreateNoWindow = true;
            processStartInfo.RedirectStandardOutput = true;
            processStartInfo.RedirectStandardInput = true;
            processStartInfo.RedirectStandardError = true;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Dictionary<string, string> keyValues = getStructAndType(inputBox.Text);

            structBox.Text = keyValues["structure"];
            typeBox.Text = keyValues["type"];
        }

        private void MyDataReceiver(object sender, DataReceivedEventArgs e)
        {
            string consoleLine = e.Data;
            typeBox.Text = consoleLine;

            typeBox.Refresh();
        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog();
            dialog.ShowDialog();
            string path = dialog.FileName;

            var lines = File.ReadLines(path);

            foreach(string line in lines)
            {
                Dictionary<string, string> keyValues = getStructAndType(line);

                string structure = keyValues["structure"];
                string type = keyValues["type"];

                richTextBox1.Text += (line + "\n");
                richTextBox1.Text += (structure + "\n");
                richTextBox1.Text += (type + "\n");
                richTextBox1.Text += "\n";
            }
        }

        private void toolStripButton2_Click(object sender, EventArgs e)
        {
            SaveFileDialog dialog = new SaveFileDialog();

            //设置保存文件对话框的标题
            dialog.Title = "请选择要保存的文件路径";

            //初始化保存目录，默认exe文件目录
            dialog.InitialDirectory = Application.StartupPath;
            dialog.Filter = "文本文件|*.txt|音频文件|*.wav|图片文件|*.jpg|所有文件|*.*";
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                //获得保存文件的路径
                string filePath = dialog.FileName;

                //保存
                using (FileStream fsWrite = new FileStream(filePath, FileMode.OpenOrCreate, FileAccess.Write))
                {
                    String text = "";
                    foreach(string line in richTextBox1.Lines)
                    {
                        text += (line + "\r\n");
                    }
                    byte[] buffer = Encoding.Default.GetBytes(text);
                    fsWrite.Write(buffer, 0, buffer.Length);
                }
            }
        }

        private Dictionary<string, string> getStructAndType(string line)
        {
            Dictionary<string, string> keyValues = new Dictionary<string, string>();

            // 启动应用 
            Process process = Process.Start(processStartInfo);

            StreamWriter writer = process.StandardInput;
            StreamReader reader = process.StandardOutput;
            StreamReader readerErr = process.StandardError;

            writer.WriteLine(line);
            writer.Flush();
            writer.Close(); // 我哭辽
            String resultStr = "";
            resultStr = reader.ReadLine();
            if(resultStr == null)
            {
                resultStr = readerErr.ReadLine();
            }

            keyValues["structure"] = resultStr;

            resultStr = null;
            resultStr = reader.ReadLine();
            if(resultStr == null)
            {
                resultStr = readerErr.ReadLine();
            }
            

            keyValues["type"] = resultStr;

            return keyValues;
        }

    }
}
