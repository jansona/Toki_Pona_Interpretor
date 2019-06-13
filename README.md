### 项目简介

本项目利用lex、bison等工具对toki pona（道本语）进行语法分析，使用C#制作GUI启动器，包装使用。

### 项目结构

1. core/ 包含核心代码，即，用于词法分析、语法分析、语义分析的lex、yacc代码以及使用工具生成的C语言代码；
2. GUI_Launcher/ 包含制作GUI启动的VS项目（C#）；
3. utils/ 包含若干用于协助开发的python脚本；
4. doc/ 包含需求分析、文法设计阶段的报告；
6. release/ 包含最终成果：toki_pona.exe是用于项目的核心，被TPP_Launcher.exe调用，后者是windows下的应用启动入口，以及一份用于测试的例句文本。