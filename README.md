# Algorithmic-question

c++ 算法题



编程笔记

gdb 添加配置 g++
调试 g++

{
"tasks": [
{
"type": "cppbuild",
"label": "C/C++: g++.exe 生成活动文件",
"command": "C:\\Program Files (x86)\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\g++.exe",
"args": [
"-g",
"${fileDirname}\\*.cpp",
"${fileDirname}\\code\\*.cpp",
"-o",
"${fileDirname}\\${fileBasenameNoExtension}.exe"
],
"options": {
"cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
],
"group": {
"kind": "build",
"isDefault": true
},
"detail": "调试器生成的任务。"
}
],
"version": "2.0.0"
}
