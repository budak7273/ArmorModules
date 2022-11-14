Fix some other mods preventing opening the 'Configs' window. New SFX for overdrawing. Jump Thruster module multiplayer fix. New Color Cartridge fuel adapter.




## New Stuff

- New **Suit Regulation** module - Color Cartridge fuel adapter
- New sounds for when the suit begins overdrawing
  - You have a couple options:
    - (Selected by default) Beeping loop
    - Beep at the start and no loop
    - Beep at the start + beeping loop (by checking both options)
    - None (by checking neither option)

## Changes

- The **Air Resistance Regulator** module now allows you to apply up to +-5 friction instead of +-1. This allows for even stronger movement dampening, if desired. Also locked the slider to 2 decimal places, and updated the tooltip on the slider and item.
- The PowerSuit's internal sounds now factor in the "Equipment" volume slider instead of the "Effects" volume slider (in addition to Master and the mod-specific one in the configs)

## Bugfixes

- Fixed a bug that prevented the Suit Config popup from opening when certain mods were installed

## Known Bugs

- Modules that grant allowed fuels will sometimes add them to the wrong end of the allowed fuels list. Re-equip your suit after installing to correct this. Remember that the slot ordering in the suit controls which fuel-granting modules are placed first in the list.
- Some of the **item conveyor meshes are broken** due to changes to the Conveyor Rendering System. In particular, the ones with cool animations like the Somerslink Regulators. I will probably have to talk to Ben or Beaver to figure out how to fix them.
- In-place swapping of modules inside the suit can cause the stats of the modules to be double-counted until you re-equip the suit. This was a result of partially fixing a crash, but I don't have time to fully fix this right now.

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) or the top of the mod page for more info.

Thanks for reading, and have fun!
