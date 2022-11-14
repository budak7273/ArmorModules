Update 5 support, at long last, shield improvements, and more bugfixes.




Hey all, Update 5 support is finally here. Special thanks to all of you who tested early versions of the mod on the [Nog's Mods Discord](http://discord.gg/zqp6U7Y7Nu), it was a big help.

### "What took so long!?"

#### Here's the short version:

- Nog is taking a break from modding the time being; I (Robb) am working to update all of his mods.

![Sadness Meme](https://cdn.discordapp.com/attachments/780930047895928852/919098221509374002/unknown.png)

#### Here's the long version:

<details>
<summary> Click to Expand </summary>

I could have had the mod updated the day after Update 5 came out if not for this mind bending crash problem.

Updating to U5 was relatively quick in the scale of things ... except for one small issue. A random crash, `execCallMathFunction` occuring anywhere between 10 seconds and 40 minutes after loading into a save. The stack trace with the crash only went through engine code and was pretty much useless for trying to track down the problem.

In the end, I deleted _every piece of code in the mod_ bit by bit until being left only with the Equipment Stats struct, which stores properties of suits and modules. For some reason, the mere presence of a TArray, TMap or TSubclassOf property in any struct led to the crash occuring. There did not even have to be any code in the mod calling it for the crash to occur. The entire mod had been reduced down to just this struct and the .uplugin.

I talked to a lot of people, and no one could figure out why this behavior was occuring. I was about to spend a lot of time switching the entire mod over to using Inline New Objects to store stats instead (suggested by Ben as CSS), but thankfully was paranoid enough to try and cause the crash from a totally blank mod _one more time_ before starting the rewrite. In the end, for some bizarre reason, the PowerSuit C++ module was set to Unreal LoadingPhase `PreLoadingScreen`. Neither Nog or I remember making this change, or why, but it turns out that this field, combined with the struct, was the true cause of the crash. Switching it back to the standard value of `Default` fixed the crash with no other changes needed to the codebase.

What does `PreLoadingScreen` do? No idea. Why was it set to `PreLoadingScreen`? No idea. Why did switching it to `Default` stop the crash? No idea. Why did this only just now start causing problems in U5, when it was totally fine in U4? No idea.

Anyways, I'm just glad it's fixed now.

Thanks for coming to my TED talk. Check out the end of the 'Misc Stuff' section for a little fun surprise.

</details>

## New Stuff

- Shield Cooldown progress is now visible in the suit HUD as a gray bar above the shield bar.
  - When it reaches the right side, the cooldown is over and the shield starts to recharge again
  - This cooldown functionality was always happening behind the scenes, but now it's visible how much time remains.

![Shield Cooldown](https://i.imgur.com/pXgF7ot.png)

- Storage Compartment module now allows you to eject all contained items to the ground by clicking a button.

## Changed Stuff

- Fix incorrect **Shield Mk2** stats - it was not actually doing what was listed in the description. Now does +2 regen (was actually +1, listed as +4) and +0.75 delay (was actually +1, listed as +0.5).
- **Shield Reconfigurator modules** now properly have their additional power consumption applied when shields are recharing. This means they will consume more power than before, because they were not fully implented in the past.
- Increased the volume of shield full and shield break sounds, since they were really quiet.
- **Mobile Workbench modules** now also allow you to exit them by pressing the Interact keybind.
  - The Inventory, Show Menu, and Toggle Buildgun keybinds were also there before but never explicitly mentioned.
- A handful of internal lag optimizations and clean-up.
- Possibly more I forgot to write down, it has been a bit.

## Bugfixes

- **Air Resistance Regulator** and **Night Vision** modules' config sliders now work correctly for multiplayer clients.
- Temporary fix for swapping modules in-place in the suit crashing your game
  - Surprisingly few people ran into (or at least, reported) this issue.
  - My current fix causes the stats of the modules to be double-counted until you re-equip the suit. This is not good, but I think it's better than hard crashing for now.
- **Storage Compartment** module no longer allows you to store Suits and Storage Compartment module inside of it.
  - If you try to do this, it will eject the item onto the ground below you.
  - This was implemented to prevent you from accidentally putting your Storage Compartment module, or your suit, inside of an installed Storage Compartment module, making it impossible to access.
- **Gas Mask** module sounds now work correctly in multiplayer
  - Clients now hear their gas mask's sounds
  - Hosts no longer hear the gas mask sounds of clients
- Fixed inconsistent tooltips in blank Configs and blank Module Details tabs
- Fixed bad GUI scaling in Mobile Workbench modules

## Misc Stuff

- Are you interested in helping to translate the mod to your native language? It could take quite a while until I figure out how to get these packed into the mod correctly, but if you'd like, you can join the Crowdin [here](https://crwd.in/powersuit-modules) and start translating. Contact me on the [Nog's Mods Discord](http://discord.gg/zqp6U7Y7Nu) if you have any questions, or if you'd like me to add a language other than the ones currently listed.
- Hey, you actually read to the end. You get a little secret. There's a 'Tesla Coil' module in the Suit Regulation sub-mod that you can access with cheats. It's not ready for release yet, but if you want to check it out, give it a shot.

## Known Bugs

- **The handheld suit controllers are not visible**. Something changed in U5 that interferes with how they used to attach to the player. I haven't been able to fix this yet.
- Some of the **item conveyor meshes are broken** due to changes to the Conveyor Rendering System. In particular, the ones with cool animations like the Somerslink Regulators. I probably have to talk to Ben or Beaver to figure out how to fix them.
- In-place swapping of modules inside the suit can cause the stats of the modules to be double-counted until you re-equip the suit. This was a result of partially fixing a crash, but I don't have time to fully fix this right now.

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) or the top of the mod page for more info.

Thanks for reading, and have fun!
