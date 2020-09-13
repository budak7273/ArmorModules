# ArmorModules / PowerSuit Modules

## Check out the mod page on [ficsit.app](https://ficsit.app/mod/BezrE8aswqXLRX)

Satisfactory mod that adds a wide variety of modules for [Nog's PowerSuits mod](https://github.com/Nogg-aholic/PowerSuit). A lot of the heavy lifting for this mod is done by the PowerSuit mod itself; this mod simply defines modules that make use of its features.

Suggestions for new modules and balance changes are greatly appreciated. Contact me on Discord via the modding discord or directly via Robb#6731. Keep in mind that you can create your own modules and recipes by making a mod that makes use of Nog's Power Suits libraries if you so desire. 

## How to use

Install from [the Satisfactory Mod Repository](http://ficsit.app/) via the Mod Manager. You'll need to have [PowerSuits](https://ficsit.app/mod/7J2LyFzTakqPQ5) mod installed as well.

## Bug reports and balance suggestions

Either leave a Github Issue here or contact me (Robb#6731) on the Satisfactory Modding [discord server](https://discord.gg/QzcG9nX). I may ask you to create an issue on here if you contact me on Discord so that progress can be tracked.

## Discord Server
Join the Satisfactory Modding [discord server](https://discord.gg/QzcG9nX) to talk about SML and Satisfactory Modding in general.

## How to develop

This repo folder should go into the Content folder of a [SML Unreal project](https://github.com/satisfactorymodding/SatisfactoryModLoader). Make sure to follow the setup directions there to set up said project and editor first.

Put a copy of the NogSource repo into your project's Source folder. (TODO probably [powersuit](https://github.com/Nogg-aholic/PowerSuit) now but confirm)

You will need to configure the .uproject to point to the dependencies from Nog. Add the following to the Modules section.
```
        {
            "Name": "PowerSuit",
            "Type": "Runtime",
            "LoadingPhase": "Default",
            "AdditionalDependencies": [
                "FactoryGame",
                "Engine",
                "UMG"
            ]
        },
```

Rebuild the FactoryGame module from Visual Studio the same way you would when setting up the project initially so that the blueprint classes exist for the editor.
