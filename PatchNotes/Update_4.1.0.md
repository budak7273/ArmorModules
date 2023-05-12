Recompile for Update 7 (CL208572) support. Zapline module buffs and bugfixes to celebrate base-game Zapline sprinting.




Be sure to read the 4.0.0 changelog - lots of stuff changed!

## New Stuff

- Debugging module from [NogsPowersuit](https://ficsit.app/mod/NogsPowersuit) now available via cheats by the name "Blank Configurable Debug Module"
  - Allows you to grant yourself arbitrary suit stats and consume/generate fuel/power

## Changed Stuff

- Increased the amount of Suit Fuel that the **Zapline Accelerator Coils** generates
  - 2.5MJ/sec -> 10MJ/sec normal
  - 7.5MJ/sec -> 20MJ/sec boosting
- **Zapline Power Tap** now allows movement while boosting
  - You can "perch" with the zipline, then use the boost key to allow movement and adjust your position
  - You can open your inventory while holding your primary fire key to lock onto the zipline and rearrange items in your suit/inventory
  - Hold boost when approaching a zipline to not be stopped and keep your speed
- Increased the amount of Suit Fuel and Power that the **Zapline Power Tap** generates
  - Fuel
    - 150MJ/sec -> 300MJ/sec normal
    - 300MJ/sec -> 600MJ/sec boosting
  - Power
    - 100 MW -> 150 MW normal
    - Boosting unaffected

## Bugfixes

- Thanks ShootMeDead and Baltrisch for bringing these bugs to my attention
- Fix oversight in fuel cost calculation code that made it impossible for modules to generate fuel
  - Affected the Zapline Accelerator Coils and Zapline Power Tap modules
- Zapline Accelerator Coils and Zapline Power Tap modules now correctly grant access to the Zapline Sprint movement states when boosting
- Zapline Power Tap modules now correctly generates power when not boosting
- Zapline modules should no longer cause suit power level desyncs in multiplayer

## Known Bugs

See the [Github Issues page](https://github.com/budak7273/ArmorModules/issues) and the top of the mod page for more info. Also check out the known bugs for PowerSuit as well.
