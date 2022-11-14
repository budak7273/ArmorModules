2 new modules, new sounds, a number of bugfixes and internal improvements, and description text improvements.




[![UpdateBanner](https://i.imgur.com/rU1PLZg.png)](https://ficsit.app/mod/BezrE8aswqXLRX)

Be sure to check out the [version 3.0.0 patch notes](https://github.com/budak7273/ArmorModules/blob/master/PatchNotes/Update_3.0.0.md) if you haven't yet!

## New Stuff

- More documentation has been added to the mod page about the Somerslink production chain
- **Jump Thruster Module** (Mobility sub-mod)
  - Expect balance and functionality to change some in the future
  - A set of electric thrusters to be fired mid-air for extra jumping mobility.
  - Increases jump height, slide-boost jump height, and slide-boost jump speed.
  - Allows taking an extra jump mid-air
  - Consumes 75MJ of Power when using the bonus jump
  - Can install multiple with stacking effects
  - Thanks to SirDigby for the idea and base implementation. Should also be compatible with his [Double Jump](https://ficsit.app/mod/F1v6tQMceNz7vm) mod.
- **Storage Compartment Module** (Fresh from R&D sub-mod)
  - Adds a 7-slot storage compartment separate from your primary inventory. Equipment and modules can't interact with this compartment, but you can transfer items between it from your inventory screen. Consumes 5 MW of Power at all times. Consumes additional Power depending on how full the compartment is.
  - **Not yet working in multiplayer.** I haven't figured out inventory component replication yet.
- New sounds for some Mobility modules, the Spatial Tear Generator, Mobile Workstations, some UI, and probably more by Michael. Check out his portfolio [here](https://Michael-Teelen.com)!
- New recipe to directly deplete Synchronized Somerslink Regulators into Depleted Somerslink Regulators. This is intended as an alternate way of producing them if you don't have the Fresh From R&D sub-mod installed. The best way to produce one is still to use the Spatial Tear Generator.
- Added fun custom MAM tree node descriptions to most alt recipes in the research tree.

## Changed Stuff

- Normal and Pay to Win module base recipes can be made in the Manufacturer now as well as by hand
- Updated the descriptions of some MAM tree nodes that were out of date
- Clarified that the last Stable Somersloop node is an alt
- Add [PowerSuit Logistic Modules](https://ficsit.app/mod/AEr7ASfJHWpnhL) to ingame sub-mods widget
  - It will not be added to the modpack until it is multiplayer compatible and balance is further finalized.
- A handful of internal lag optimizations and clean-up
- Possibly more I forgot to write down, it has been a bit.

## Bugfixes

- Fixed Slug Amplification generator desyncing power gen amount in multiplayer, causing unusual suit behavior.
- Fixed Adaptive Flight Module tooltip stating the wrong default keybind (it's G, not Left Alt)
- Gas Mask Module should no longer allow one tick of damage if it refills its filters while you are in gas
- Hazmat Module should no longer skip playing the refill sound in some conditions

## Misc Stuff

- I am quite busy with life stuff, so this could be the last round of updates for a while.
- Are you interested in helping to translate the mod to your native language? It could take quite a while until I figure out how to get these packed into the mod correctly, but if you'd like, you can join the Crowdin [here](https://crwd.in/powersuit-modules) and start translating. Contact me on the [Nog's Mods Discord](http://discord.gg/zqp6U7Y7Nu) if you have any questions, or if you'd like me to add a language other than the ones currently listed.
- Hey, you actually read to the end. You get a little secret. There's a 'Tesla Coil' module in the Suit Regulation sub-mod that you can access with cheats. It's not ready for release yet, but if you want to check it out, give it a shot.

## Known bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) or the top of the mod page for more info.

Thanks for reading, and have fun!
