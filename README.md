# [Click here to install or see the mod page on Ficsit.app](https://ficsit.app/mod/BezrE8aswqXLRX/)

[![](https://i.imgur.com/LnZ7uKE.png)](https://ficsit.app/mod/BezrE8aswqXLRX/)[![PowerSuit Modules](https://i.imgur.com/almXu5F.png)](https://ficsit.app/mod/BezrE8aswqXLRX/)

![Huzzah - 2.0!](https://i.imgur.com/F6jkDDU.png)

![Multiplayer compatible!](https://raw.githubusercontent.com/deantendo/community/master/com_mp_yes.png)

<details>
<summary> Multiplayer Compatibility Notes </summary>

Most of the multiplayer compatibility logic happens in the base PowerSuit mod. Please report any issues to me (Robb#6731) or Nog.

- Clients can't see the player's material change when someone equips a suit. Hosts can see it just fine.
- The 'Shield Broken' icon/timer doesn't display on clients' HUDs, but it still functions as it should.
- The 'currently used fuel' icon will sometimes not match up for clients, but the fuel item usage and consumption still works as it should.
- If a client is hover flying and the host jumps, it may play a jetpack sound for the host.
- If a client logs out with radioactive items in their inventory or in a radioactive area, their 'ghost' player will die to radiation while they are offline.
- The Night Vision module currently only works for the host player, and will stack the screen effects on the host if clients use it as well. I currently lack the Blueprint scripting knowledge to resolve this.

</details>

<details>
<summary> Known Bugs </summary>

Also check the Multiplayer Compatibility Notes section, and possibly the [GitHub Issues page](https://github.com/budak7273/ArmorModules/issues/).

**Major**
- You may have had issues in the past with the jetpack actually thrusting you downwards at times or simply not working well at all. This is an issue with the lag compensation code, but it should have been fixed in recent updates. Now, the lower your FPS is, you will have additional upwards thrust to compensate. This is not a perfect fix, but it should mean that you can always fly no matter your FPS. Nog and I are trying out possible solutions still - please let us know if you still can't fly upwards.
- People have reportedly had issues entering and exiting vehicles. If you have any more info on this, please let us know.
- Suits can (rarely) randomly lose their contents when you die. We have been able to reproduce this, but it's very inconsistent, and there doesn't seem to be any real cause for why it happens. We suspect it is a base game issue. For now, just reload the last save or cheat the modules back in if this happens to you.

**Minor**
- Suits do not save their last used fuel, stored energy levels, or fuel levels in the save file, so when you log in, your suit may claim to be running on Fuel even if you don't have any. This will update the next time your suit refills. Enjoy the free fuel!
- The way that module power cost multipliers (ex. +10% power consumption) applies is not functioning entirely correctly. This does not make modules unusable, but makes their power costs not behave as expected. I plan to resolve this in a future update.

</details>

This mod adds a whole bunch (**44+**) of armor modules for use in your **multiplayer-compatible**
 [PowerSuit](https://ficsit.app/mod/7J2LyFzTakqPQ5), reminiscent of Factorio's [equipment module system](https://wiki.factorio.com/Power_armor_MK2). It also introduces a new Biofuel-powered suit (on top of PowerSuit's Mk1-3 suits) accessible as soon as you get Blade Runners.

Although you can use this mod in tandem with the [NogsDefaultModules](https://ficsit.app/mod/57oAxg12P4iGdL) mod, they are not balanced for each other in the slightest. I would not recommend it.

Please report leave suggestions and report issues either in the [Modding Discord](https://bit.ly/SatisfactoryModding) or [as a Github issue](https://github.com/budak7273/ArmorModules/issues/new/choose).

## Feature Overview

* Customize the function of your PowerSuit to your liking.
There is no 'perfect' armor setup - you get to decide.
* Work with R&D to develop 45+ modules to install across 11 new milestones to unlock - with ADA voicelines!
* Combine the effects of the
![](https://i.imgur.com/5KW7uYY.png) Jetpack,
![](https://i.imgur.com/Pi65d74.png) Gas Mask,
![](https://i.imgur.com/BMOVzZp.png) Blade Runners,
![](https://i.imgur.com/ENzGwEc.png) Hazmat Suit,
and more into one convenient, cost-balanced, customizable, and multiplayer-compatible package!
* Manage the power usage of your suit with a variety of power generation and storage options.
* Get access to limited early game flight with the ![](https://i.imgur.com/r9Oo8XV.png) Biofuel Suit and ![](https://i.imgur.com/LUbGHnG.png) Thrust Boots Module as soon as you get Blade Runners and Steel.
* Harness ![](https://i.imgur.com/gOgUQvu.png) nuclear power before T7 to power your suit, albeit with some risk to the user.
* Power-slide like a champ with with the rocket-assisted ![](https://i.imgur.com/45XVK8q.png) S.L.I.D.E Module.
* Further augment your
![](https://i.imgur.com/vAlwH9e.png) ground and 
![](https://i.imgur.com/13GW9xQ.png) air movement speed,
among other abilities, with additional modules.
* Protect yourself from enemies (and your fellow pioneers) with a variety of 
![](https://i.imgur.com/ZLayQ7U.png) protective modules and
![](https://i.imgur.com/rgnwkUy.png) shields.
* See clearly at night with the
![](https://i.imgur.com/erv7HNj.png) Night Vision Module.
* And much, much more!

## Check out (old versions of) the mod in action!
#### Thank you Random Gamer and TotalXclipse!
The mod has updated *significantly* since these videos were released, but they're still definitely worth a watch.
[![Random Gamer Video](https://i.imgur.com/WwqChWg.png)](https://www.youtube.com/watch?v=FRMOZ18eSc4)
[![TotalXclipse Video](https://i.imgur.com/RGnJQRU.png)](https://www.youtube.com/watch?v=4JMTp2kC-oY)

# FAQ - please read if you have an issue!

<details>
<summary>Click to Expand</summary>

- Why do I crash on launch?
    - You need to install the [PowerSuit mod by Nog]((https://ficsit.app/mod/7J2LyFzTakqPQ5)) to use this mod. The launcher should have downloaded it for you automatically.
- None of the milestones are appearing in the H.U.B. !
    - The milestones will not appear until you have unlocked at least one of the PowerSuit mod's equipment milestones which unlock the suit item, or this mod's Biofuel Power Suit.
- Why does the green bar in my suit keep running out and my suit turning off?
    - The green bar is your suit's power bar - you're running out of power. Consider adding modules that increase Capacity and Power Generation, or removing some modules.
- Module _____ isn't working!
    - This mod can be broken by updates to the main PowerSuit mod, and I often miss things in my testing. Please check the [Github issues](https://github.com/budak7273/ArmorModules/issues/) to see if it has already been reported. If not, send a message in the `#help-using-mods` channel of the modding Discord mentioning me (Robb#6731) to let me know, or [post an issue on Github](https://github.com/budak7273/ArmorModules/issues/new/choose).
- Why does my fuel meter read over 100%?
    - Read the Suit HUD - Fuel Reserves section of this page.
- Why can I craft the Dirty Reactor Module before I have access to nuclear processing and the Hazmat Suit?
    - This is an intended feature. Perhaps there's another way to protect yourself from the radiation damage you take crafting the module?
- I still hear the radiation damage noise when I have full radiation resistance (ex. Integrated Hazmat Module)
    - This is a limitation of the base PowerSuit mod. I don't have a fix for this right now, sorry.
- Why is everything so cheap/expensive/overpowered/weak?
    - I tried to balance the recipe costs and functionality of these modules according to my tastes, but I'm open to suggestions    - contact me on Discord (Robb#6731). Feel free to create a mod of your own to overwrite my mod's recipes for these items.

</details>

# Suit Info

## Suit Controls

Once you unlock the Biofuel Suit, you will receive a message in your in-game Inbox from R&D in the Tutorials section. This message has information about the controls. They can not currently be rebound to different keys.

## Module Basics

Each module is crafted from a 
![](https://i.imgur.com/WJ1xfNw.png) **Base Module**
and a handful of other components.
All modules are currently crafted at the **Equipment Workbench** once they are unlocked in the H.U.B. .
Do note that each Base Module requires a Power Shard to craft - but there are some alternate recipes you can unlock that don't need Power Shards.

**All modules have extensive descriptions of what they do in their item description.** 

One way to check these descriptions is by mousing over them in the H.U.B. milestones. You can also check the Item Codex (press X). More are described below in the *More Details* section further down on the page.

## Detailed Suit Usage Information

If you would prefer a video format, consider watching one of the above Mod Spotlight videos, although they are outdated and many features have changed since.

Install modules into your PowerSuit by equipping the suit and pressing **Right Alt** to open the suit's internal inventory. Drag modules in like you would a chest to install them. Shift clicking is not supported yet. Ctrl-Drag works, though.

Check out the *Stats* section of the suit inventory screen to see information about your suit.

Once you have a Jetpack Module of some sort installed, you can start hover flying by holding down space, just like the vanilla jetpack. All Jetpacks consumes Fuel, which your suit will refill when you are on the ground. The kind of accepted Fuel depends on the suit (see more below). You can install a Mid-Air Refueling module to allow refueling while flying. What kind of flight you have depends on what module you have installed:
- ![](https://i.imgur.com/LUbGHnG.png) **Thrust Boots Module**
    - Hold space to ascend. No boost functionality. This jetpack will reduce your horizontal speed as you fly, so don't expect to be zooming
- ![](https://i.imgur.com/5KW7uYY.png) **Integrated Jetpack Module**
    - Hold space to ascend. You can boost by holding sprint to go a bit faster. Flying with this jetpack will not reduce your horizontal speed as you fly, like the vanilla jetpack. This jetpack is a bit zippier and affords you a bit more flight range on a single tank, assuming you can provide the power.
- ![](https://i.imgur.com/tBnYvBb.png) **Hover Jetpack Module**
    - Hold space to ascend, automatically putting you into hover mode. While flying, hold space to ascend, crouch to descend, and sprint to boost. When you are not pressing any movement keys, the Hover Jetpack will attempt to bring you to a full stop midair.

Consider using other modules to change the flight behavior and speed of your suit. Most of these are in the Mobility section.

All Jetpacks can also run off of just energy alone, but the energy consumption is *drastically* higher than if you had fuel.

### Suit HUD

![Suit HUD screenshot](https://i.imgur.com/WSc2Icm.png)

The suit HUD has multiple bars, listed here from top to bottom:

- **Hover and Flight display**

    ![](https://i.imgur.com/r7t1YlH.png)
    - If are flying, a set of wings will appear.
    - If you are in Hover Mode, a smaller set of blue swoops appears to the top right of the flight icon.
- **Movement speed display**
    - Displays your current velocity in meters per second. 
- **Shield - Light Blue** *(Empty unless you have shield modules installed)*
    - Blocks most types of damage before your health is affected.
    - Your shield has a delay before it starts recharging again after you take damage. The remaining time is shown as a little red progress bar by this icon:

    ![](https://i.imgur.com/pFLXSYe.png)

    - When your shield is recharging, you'll see an red battery icon above the shield bar:

    ![](https://i.imgur.com/xfvLa6r.png)

- **Power - Green**
    - Your suit has an internal battery (Power Total) that acts as its energy reserves, and it comes with a bit of power generation built in.
    - See how much energy your suit is using/generating by looking at the Power Balance readout in the Suit Stats screen. Positive numbers means you have a surplus, negative means you have a shortage. External PowerDraw shows you how much energy you are currently using. It does not include energy consumption due to shields recharging (might in the future)
    - Installing generally modules decreases the maximum internal battery.
    - Some modules consume power to run, which will drain the internal battery's charge.
    - To raise your internal battery capacity, install one of 3 Capacity-boosting modules.
    - To recharge the internal battery faster, install one of many Generation modules, which do not currently consume any resources to operate.
    - If the suit runs out of internal battery, it will begin to Overdraw (if your tier of suit has the ability to do so), which is shown as a red progress bar advancing along the top of the Power bar. If the red bar reaches the end, your suit will short, and all modules will cease to function (including Jetpacks    - watch out!)
 
    ![](https://i.imgur.com/mBjdC6D.png)
    - When the suit shorts, you will have to wait for it to reboot, indicated by the lighting bolt and yellow progress bar. If this doesn't go away, it means you're still consuming too much power for the suit to reboot. Try adding more generators or removing power-consuming modules. This is the reboot icon:
 
    ![](https://i.imgur.com/eoxOQUv.png)

- **Fuel Reserves - Orange**
    - **Your suit's fuel reserves.** This is drained to fill the fuel tank when you are on the ground, and will refill automatically (by consuming items from your inventory) when it reaches 0%. Fuel in the Reserves is not directly accessible by modules.
    - If your suit has high fuel efficiency, it's totally normal for this value to be over 100%. For example, the Biofuel Suit has a 400% fuel efficiency bonus.
    - *Fuel only transfers from the Reserves to the Tank when you are on the ground.* You can install a  ![](https://i.imgur.com/bdOlMoP.png) **Mid-Air Refueling Module** to change this.
    - Fuel is only needed for modules that consume fuel (currently just the Integrated Jetpack, Thrust Boots, and Hover Jetpack)
    - What items can be consumed to refuel the fuel reserves depends on what PowerSuit you have equipped: 

<details>
<summary>Accepted Fuels (click to expand)</summary>

The Biofuel Suit runs on the following fuels, and has 400% fuel efficiency - you get extra suit Fuel compared to if you were using another suit with the same fuels.

- 1x Packaged BioFuel
- 2x Solid Biofuel
- 5x Biomass
- 10x Wood
- 50x Leaves

The PowerSuit Mk1, Mk2, and Mk3 run on the following fuels:

- 1x Packaged TurboFuel
- 2x Packaged Fuel
- 2x Solid Biofuel
- 10x Wood
- 200x Leaves

</details>

![](https://i.imgur.com/YR154oF.png)

- **Fuel Tank - Base game body slot display**
    - Shows what tier of suit you are wearing on the far left and the name above the Fuel Tank.
    - Shows what type of fuel is currently being used. In the screenshot, it's Packaged Turbofuel.
    - **Shows how much fuel is currently available to modules.** Currently, only Jetpack-type modules consume fuel. When on the ground, fuel will automatically transfer from the Fuel Reserves to the Fuel Tank, just like how the vanilla Jetpack refills on the ground. You can install a ![](https://i.imgur.com/bdOlMoP.png) **Mid-Air Refueling Module** for this to happen when flying as well.
    - **The higher the energy value of the fuel item, the longer one Fuel Tank will last you**. For example, if the suit is running on Turbofuel, one full tank will let you fly further than if it the suit was running on Leaves.

## More Details

You can view the item description of a module before you craft it to see what it does. You can do this in a variety of ways:
1. Hover over it in the H.U.B. milestone it's a part of
2. Check it out in the Item Codex (default 'x'). All modules should have the word 'module' in their name for easy search.
3. Hover over the 'output item' icon in the middle section of the Equipment Workbench GUI. It can be troublesome to get your cursor in the right position for this.

I did my best to balance these modules recipes with respect to when you can obtain them. I am actively looking for feedback on this - please contact me if you have suggestions.

A lot of the heavy lifting to make this mod possible is actually done in the PowerSuit mod itself. If you're interested in seeing what's possible with the mod or making some modules of your own, I strongly suggest you check out its mod page for more info.

If you're interested in making your own modules or recipes for these modules, both this mod and the base PowerSuit mod are open source. Feel free to check out the source code or contact either Nog or I via the Satisfactory Modding Discord for more info.

# Updates and Patch Notes

I am quite a busy person, and it may take me a while to update the mod if it breaks. Please be patient when the game updates and please report any issues you encounter on the Discord or similar.

## Past Patch Notes

Find them [here](https://github.com/budak7273/ArmorModules/tree/master/PatchNotes) or by clicking View on a version in the [versions tab](https://ficsit.app/mod/BezrE8aswqXLRX).

## Future Update Plans (in no particular order)

<details>
<summary>Click to Expand</summary>

- Implement a higher density fuel item that all suits can run on.
    - I already have this made, but I am having trouble overriding the base PowerSuit mod's suit descriptors to get them to actually accept it. Only the Biofuel suit accepts it right now.
- Make modules unlocked via M.A.M. Research Tree instead of (currently free) HUB milestones.
    - Research Trees currently don't sync correctly in multiplayer, which is why I haven't done this yet. More info on this [here](https://discordapp.com/channels/555424930502541343/555515791592652823/756561066200137880).
- Finish modules marked as WIP
    - Balance suggestions greatly appreciated
- Give everything Resource Sink point values
- Continue to evaluate balance of existing modules
    - Ensure that you can't get too ridiculously overpowered or make power management a complete non-issue
- More modules!
    - Fuel-consuming suit power generators
    - Damage resistance against enemies, but I think shields already fulfill this role pretty well.
    - Fuel backup system for when the suit runs out of power
    - Fun late game modules like out-of-bounds damage immunity
    - Fuel efficiency increaser
    - Sliding Generator
- Make the milestones display in a consistent order across saves
- Make modules names an descriptions pull from String Tables to allow for possible translation in the future

</details>

## Won't Add
<details>
<summary>Click to Expand</summary>

Remember - this mod and the base PowerSuit mod are open source, and you're totally free to create your own modules with these as inspiration.

- 3D models for any modules
    - I don't plan to make custom models for the modules or crafting materials any time soon. They don't really have much of a reason to be moving around on conveyors or on the ground anyways.
    - I may need some icons made in the future, though. If you would like to contribute models/icons for them I would greatly appreciate it.
- 'Free' Cheat Modules
    - Although they're entirely possible, I feel like they belong in another mod. Nothing's stopping you from giving yourself modules via PakUtilityMod or similar, though. The mod includes a couple cheat modules for debug purposes, but you'll need another mod's give command to obtain them. They all have 'Debug' in the name. Consider knowledge of these a little surprise for actually reading through my wordy mod page. Thanks!

</details>