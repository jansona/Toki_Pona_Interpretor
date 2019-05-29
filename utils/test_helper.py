## -*- coding: utf-8 -*- 
import os


app = "a.exe"

with open("sentences.txt") as fin:
    for line in fin:
        
        command = '`' + line + '`' + " | " + r".\a.exe"
        print(command)
        os.system(command)

