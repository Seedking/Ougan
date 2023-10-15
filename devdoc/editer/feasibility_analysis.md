# 可行性分析
## 工程
### 概念
* 空间 - 标记空间，游戏主程序触发后加载空间内所有音频文件，也可以卸载
* 效果器 - 标记其本身和控制方式
* 轨道 - 标记挂载效果器和输入输出信号，以及轨道播放pan和音量
* 音频 - 标记音频播放的轨道，以及播放时总音量和ADSR（感觉有冲突）
* 事件 - 标记一个事件，可以被游戏主程序触发
* 操控器 - 标记通过特定事件触发的操控器，可以做出对应的操控
* 传递器 - 和游戏交互，获得游戏主程序的某种空间参数（懒得做）
## 需求
### 功能
有图形界面编辑器  
可以将编辑的数据记录为JSON（工程）  
可以加载JSON（工程） 
#### 细节
* 拖动音频文件和内部控件（不知道在flutter中如何实现）
* 
### 界面
界面模仿StudioOne，轨道信号逻辑模仿Reaper  
![studioone](https://github.com/Seedking/Ougan/blob/main/resources/studioone.png)  

## 解决
### 使用语言
斟酌是kotlin还是c  
使用kotlin似乎可以方便移植且不容易犯错  
使用c可以修炼基础编程能力，但容易出错  
所以选择c 选择修炼！  
但是似乎可以纯dart解决所有问题  

换electron之后就全都是c和js了 哈哈。

发现compose-multiplatform，找时间测试，  
感觉比electron方便
### 使用库
* 图形界面 [flutter](https://github.com/flutter/flutter) (经测试发现这玩意在桌面平台不好使)  
* 图形界面 [electron](https://www.electronjs.org/zh/)
* 图形界面 [compose-multiplatform](https://github.com/JetBrains/compose-multiplatform)