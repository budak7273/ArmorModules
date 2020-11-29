![](https://i.imgur.com/KA17eda.png)

# Patch Notes
**Big update here!** Thank you to those that have been sending feedback my way - I've tried to incorporate as much of it as I can into this update.

There are now 45 total modules to play with, and 1 new suit!

Compatibility with PowerSuit version 0.3.3 and game version 137909

There are probably a few changes I forgot to list here, but I tried to get them all. A ton of stuff has changed on the base PowerSuit mod as well to allow these features - thanks Nog!

## **Major changes - Please read!**
- **Movement speed variance fixes**
   - There have been issues in the past with movement speed and flight power varying depending on the FPS of the user. These should have all been fixed as of this update to this mod and the PowerSuit base mod. Please contact Nog or I if you're still having issues.
- **Jetpack Overhaul**
    - It's finally here - jetpack variants that work more like the Vanilla jetpack.
    - **Jetpacks no longer refill in midair by default.** You must install a **Mid-Air Refueling Module** to have this behavior again.
    - **You no longer have to double tap space to enter flying mode** - just hold space and the suit will start to fly. Hover mode is now toggled with `Ctrl`+`Space`. You can still double tap space to stop hover flight.
    - **Jetpack sounds** implemented by Nog in the base PowerSuit mod. Huzzah!
    - The orange bar in the HUD means something different now. Read more in the Suit HUD section of the mod page.
- Power generation modules have drastically reduced Power Capacity bonuses. Capacity increases have been moved to other (new) modules.
- **Early Game Biofuel Suit**!
    - Craft a (limited) PowerSuit as soon as you get your hands on some Blade Runners.
    - Also unlocks a few modules to get you started.
- **Milestone Costs**
    - All milestones need to be purchased again after this update. Existing modules should be safe, though.
    - Milestones now have costs instead of being free, but purposely low ship return timers. Please contact me with milestone price feedback (or any other feedback you have regarding the mod)
    - When unlocking the milestones, you'll also get to hear the new...
- **ADA Messages!**
    - In preparation for eventual MAM compatibility, I made ADA messages for the milestones and have split up the milestones a bit more. 
    - Once the MAM integration works better with multiplayer I will be switching the milestones over to MAM research trees.
    - Message sending code based heavily off of what Panakotta uses in FICSIT Networks.
    - I'm not sure if these are multiplayer compatible - please let me know if they don't seem to be working in multiplayer for you.
- A **suit controls tutorial** can now be found in your Inbox's tutorial section after researching the Biofuel Suit.

## New Modules
- **Thrust Boots**
    - Early game jetpack. Very slow vertical ascent and range - mostly just for maintaining height or slowing falls.
- **Mid-Air Refueling Module**
    - Allows your Fuel reserves to refill while flying at an additional 10% fuel and energy cost.
- **Fuel Pumps Module**
    - Increases Fuel refill speed at the cost of fuel efficiency.
- **Hypertube Charging Coils Module**
    - Balance WIP.
    - Charges your suit at an impressive rate from your base's power network while using HyperTubes and not boosting.
    - Slightly lowers your max boosting speed and increases boosting power consumption.
- 3 tiers of Power Capacity Module
    - Balance WIP. I'm trying to make these worthwhile choices in place of more generators.
    - **Capacity Capacitors Module**
    - **'Fuel Cell' Module**
    - **Advanced Battery Bank Module**
- **Backup Capacitors Module**
    - Extra overdraw time before the suit shorts, increased reboot time.
- **Shield Generator Mk2**
    - Higher capacity and regen at a higher material and power cost.
- A few more top secret hidden modules! These are not included in the total of 45 modules, so there's actually more than 45.

## Recipe Tweaks
- Various alternate recipes are available for crafting Module Base Components.
- Alternate (renewable) recipe for shield emitter since there are a fair few things that use it.
- Bio Generator no longer requires Oil Processing tier items to make.
- Module Base Components now require Smart Plating to craft instead of Circuit Boards since they are accessible earlier in the game now.
- New Precision Thruster crafting component involved in some recipes now.
- Ballistics Fabric renamed to Protective Weave and introduced in some additional recipes.
- Drastically reduced cost of Ballistics Plating module. I accidentally set the recipe too high and never noticed until now.
- Hazmat module now requires aluminum plates instead of motors.

## Module tweaks
- A number of modules that didn't have icons do now
- All pre-existing Jetpack modules no longer refuel while flying, requiring another module to grant this ability.
- **Vanilla-Style Jetpack Module**
    - Renamed to **Integrated Jetpack Module**
    - Now has vanilla jetpack 'press space to thrust' behavior - hold space to start flying up.
    - New feature - Press Left Alt to make a powered descent.
- **Fall Dampener Module** now only consumes power while Flight Falling and Flying Down. Its effects still kick in all the time.
- **Slug Amplification Generator**
    - Behavior changed significantly to make it more unique among the generators and give the user an interesting choice to make.
    - Now boosts power production by 10% at the cost of 10% capacity.
    - Bio generator is cheaper now.
- **HyperTube Accelerator Coils**
    - Now only consumes power when actually boosting.
    - New icon so it's visually distinct from the Hypertube Charging Coils.
- Health Regeneration modules nerf.
    - Free healing is quite strong and often removes the need for any shields. Lower regen rates to balance that out a bit, especially for the cheaper modules.
    - Mk1 0.5/s -> 0.25/s
    - Mk2 2/s -> 1/s and power cost upped to 25MW
    - Mk3 5/s -> 4/s
- **S.L.I.D.E. Module**
    - PowerSuits no longer provide infinite sliding time by default; you must install this module now for that functionality.
    - You can power slide by pressing Left Alt while sliding for a speed boost.
    - Power sliding consumes Power.
	- This module gets pretty silly. I suggest you try out stacking a few of them.
- Added MP warning to **Night Vision Module** description. It only works for the host in multiplayer. I do not yet have the BP knowledge to fix this.

## Bugfixes
- The top secret hidden milestone is now T0 instead of T9, so having the mod installed shouldn't show extra tiers  that don't actually exist in the HUB. Thanks Mase#4410 and Bando#6593.
- Issue with flight thrust not kicking in when you start flying while falling fixed by Nog.

## Coming Soon
- A few people have been requesting that the suits accept Batteries as a fuel source, or to have some other higher energy fuel source than packaged fuel and turbofuel. I have created this item, but I'm having issues overriding the suits added in the base PowerSuit mod to accept them. As such, this item will be coming out in a future update.