# 2023年9月进展报告

欢迎观看油管视频的[九月更新](https://www.youtube.com/watch?v=nfLEc09tTjI)，可下载[最新演示版](https://github.com/schombert/Project-Alice/releases/download/v0.0.6-demo/2023-9-7-DEMO.zip)。

## 小事

我知道大家不想看长文。所以先看几个图片。

单位移动：![rally point](rally_point.png)

框选正常运行：![box selection](box.png)

## 公测版
我们很快发布公测版。由于已有演示可用，对玩过的人们来说，没多大区别。但对我来说，是两回事。首先，虽然会有些问题，但你可以玩完整的游戏。其次，我将接受公众反馈错误的渠道。依此能在下月进入beta阶段（区别在此阶段没有大错，而aplha可能有）。

测试版与演示版可能有相同限制。它们只能在win10或更高版本上运行，并且需要支持AVX2的CPU（过去十年中发布的大多CPU）。有些人报告说，在支持OpenGL的图形卡上运行演示版有问题，即使Leaf提供了必要的解决方法。

### 做个错误报告

若不想做就略过这部分。

从a版到b版将被质量高的错误报告所推动。理论上很简单，进入Discord的bug-reports频道中进行报告。但仅仅说某个错了的简单报告可能没啥用。程序员为了修复错误需要三个信息：识别错误、复现错误和正确行为应是什么。你写的报告可能没提供所有信息。

假设你遇到bug，用特定战争理由没有给你声望损失。你可能会写“使用某理由没有声望损失”帖子，似乎包含了？说了但没说？首先，它没有说清bug，每次都有？一些情况才会有？其他战争理由会有这问题？您告诉我们的关于这问题的信息越多，程序员才能确定bug的实际情况。

## 启动器

![Launcher](launcher.png)

启动器不仅是选择模组和启动游戏的地方。Project Alice 使用“场景文件”快速加载游戏。场景文件是游戏数据的高效打包版本（也根据模组组合进行修改）。当第一次运行游戏或选择新的模组组合时，须先用启动器创建场景文件（时间由本机配置决定）。如果更新模组，需要重新创建场景文件才能看到模组中的更改（注意：使用新的场景文件时，旧存档将不可用）。场景文件位于`我的文档/Project Alice/scenarios`，而存档位于`我的文档/Project Alice/saves`。

## HPM兼容性

为了实现兼容更普遍的模组，上月我们重点解决了正确加载HPM的问题，过程中发现HPM的三个小错误。因此为了启动器不再打扰提示这些错误，我们发布了它的小补丁（在Discord的mod-compatibility-pathces频道获取）。

![HPM globe](hpm_globe.png)

即使还要些微调，以使文本在新字体下更好适应，但HPM的大多更改可以愉快加载。

![HPM ui](hpm_ref.png)

## The End

下月再见！（若等不及就加入[discord](https://discord.gg/QUJExr4mRn)！）
