# Progress as of January 2024

On to bigger and better things

## 1.0 Has Arrived

Version [1.0.1](https://github.com/schombert/Project-Alice/releases/download/v1.0.1/1.0.1.zip) of Project Alice is now available.

## A Victoria 2 Clone?

Version 1.0.0 is what I would consider a pretty close copy of Victoria 2, but it is far from a perfect copy. We will of course continue to fix bugs, and leaf has a number of features she is working on (possibly even including some 3d models) that will appear in future 1.0.x releases.

I know that, for some of you, it won't be enough, and that what you really want is a perfect replica of Victoria 2, even down to some of the bugs. You are also probably aware that this is not *my* goal with the project. The 1.0.x series of releases is probably as close as Project Alice will get to copying Victoria 2.

But just because that isn't *my* goal doesn't mean that you have to give up on it, if that is what you want. I encourage people who are Victoria 2 "purists" to organize themselves on our server (you can even have your own channel there, if you want) and start working on a version of the project that will be based on the 1.0.x series of releases but which will build on those towards the perfect copy of Victoria 2 that you dream of.

Starting from the 1.0.x releases will put this sister project much, much closer to its overall goals than starting over from scratch would. The lessons I learned from Open V2, one of my previous projects, made working on Project Alice much easier, and starting from something that is sort-of Victoria 2 is going to save countless hours. Seeing yet another project start over from scratch would pain me. Plus, while I don't plan on directly contributing to a purist recreation of Victoria 2, I would still be happy to answer questions and provide advice for the team that does pick it up; you wouldn't have to navigate through a foreign code base without any help.

## The Immediate Future

As with any piece of software, there are always more bugs to be found and fixed. We are aware that rebels still need to be fine-tuned and that TUR in GFM displays some odd behavior. (If you want to help these issues get fixed, having more people play the game and try to identify their causes is very useful.) As already mentioned, leaf has a number of projects she is working on that will continue to be added. Ma44 has been working on the AI, so we will probably see some improvements there as well. And we may also turn towards implementing some of the smaller and more interesting items in the suggestions forum. There are also a number of small features (for example, enabling scrolling via moving towards the edge of the window) that would be excellent projects for new contributors.

![models](models.png)
Leaf's early work at getting some of the models to load and render.

For the next couple of months I personally plan to limit my immediate contributions to fixing bugs of a more technical nature. Partly this is because I am waiting to see where the community lands on Project Alice before starting on any big changes to the game. As I mentioned in last month's update, if we start seeing mods for Project Alice specifically, then I will probably focus the project on serving the needs of those modders and on making changes to the game that enjoy wide community support. Of course, if we don't get many modders, then there is no one to really upset with breaking changes to the game, and I will pursue more radical experiments instead.

If you are working on a mod, even if it is just a small one, we are happy to host your work in our discord. We also welcome more compatibility patches for existing Victoria 2 mods. And some mods, like GFM, are so complex that we could really use some more people with GFM experience to help improve the compatibility patch (GFM in particular feels a bit buggy, but we don't have enough experience with GFM to understand what is supposed to be happening and begin to diagnose what is going on with it). Making a compatibility patch is generally pretty straightforward. First, you fix the errors reported by the launcher when you try to make a scenario with the mod. Then, when those are all fixed, you play the mod and see if anything "weird" compared to normal mod behavior is happening. If you can identify events, decisions, or other factors that aren't behaving as they do in Victoria 2, you can report those to us leading to either bug fixes in Project Alice or perhaps some new workarounds for the compatibility patch.

But, regardless of what the distant future for the project looks like, there is some work that needs to be done first: a ui overhaul, which is what I *will* be focusing on.

## UI changes

Accommodating the existing Victoria 2 gui files is a substantial barrier to further development. When I was implementing a simple version of international debt, the main difficulty was not writing the internal logic to make it work; the main difficulty was in fact figuring out how to stick it into the existing ui, and in the end I provided only a very minimal interface to it. This is far from ideal, because the user interface *is* the game, and if writing the ui for new game systems isn't painless, that makes everyone much more reluctant to work on them. Not only is the format of the gui and gfx files itself quite inconvenient, it also locks us into supporting the win1250 code page for text. In the long term, we need to make the transition to unicode, both for the sake of our international users and my sanity. Doing that, however, means throwing out compatibility with the old Victoria 2 bitmap fonts and localization files, and it means rewriting parts of the ui to render unicode.

So I have decided to throw out the ui system (and localization system, as a byproduct of this) and start over. For me, this means a bunch of technical work, at the end of which I will come away with some tools to make my life easier. For you this will mean a few things. First, you should expect the overall look and feel of the game to change. I am not going to copy the old gui files into the new system I create. Instead, I plan on remaking much of the ui to start the process of moving away from using the Victoria 2 game files and towards a game that can stand on its own (although this will probably be limited to the simpler elements, such as buttons and backgrounds, to start with; I don't have enough artistic talent to really remake the icons properly). Secondly, you will lose the option to switch to the classic fonts, as there is no way to display unicode text with them. Thirdly, I would expect the big country names on the map to disappear for a while, and if they do come back, they probably wont be "curvy" (many scripts do not work very well, or at all, if you start bending the baseline). Finally, any ui changes that mods make will be lost. I expect most mods for Victoria 2 to keep working at this point (we will still display all the same internal data), but any individual flair they added would have to be recreated in the new ui system.

I guess I should also warn you that some of my ui ideas will probably strike you as odd, at least initially. There won't be any scrollbars, for example. The ui will partly build on some ideas from a previous project of mine, called PrintUI, which you can find a demo video of [here](https://www.youtube.com/watch?v=SbE6sTv4e-c). That project was mainly an experiment in making a minimalistic ui that could be used with equal ease with the mouse, keyboard, controller, or some combination of the three. I don't intend our new ui to be quite so Spartan, but I am still interested in making it less dependent on the mouse as the only option.

## The End

See you again next month! (or, if you can't wait that long, join us on [discord](https://discord.gg/QUJExr4mRn))