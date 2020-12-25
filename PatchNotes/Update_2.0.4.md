[![](https://i.imgur.com/KA17eda.png)](https://ficsit.app/mod/BezrE8aswqXLRX/version/7hefVFwfYeBzR5/view)
# Be sure to check out the patch notes for [Version 2.0.0](https://ficsit.app/mod/BezrE8aswqXLRX/version/7hefVFwfYeBzR5/view) if you haven't yet!

## Tweaks
- The Biofuel Suit character model has a new green color scheme instead of the same color as the Power Suit Mk1.
- Further tweaks to the jetpack 'ignition delay' time.
    - The previous change resulted in being unable to jump with a jetpack (most noticeably the hover jetpack) without starting flight.
	- You should no longer have to slide-jump or ctrl+jump to jump without starting the jetpack.
	- New systems have been implemented that should you can jump around with relative ease without triggering flight on accident, while still letting you start flying quickly if you walk off a ledge.
	- The timings are configurable. Read more in the New Features section.

## Bugfixes
- I packed the base PowerSuit mod with the right texture files this time. Whoops. No more missing textures and icons, hopefully. Please let me know if you find any more.

## New Features
These were changes made by me on the base PowerSuit mod side. If it broke something, yell at me, not Nog.
- **PowerSuit config options**
	- You can reload the configs without restarting the game with the chat command `/reloadPowerSuitConfig`. There is no confirmation message when it runs, it will just reload the configs. It does log to the SML console, though.
	- The configs are separate for multiplayer host and client; each has their own set.
    - You can now configure the following properties by editing `PowerSuit.cfg` in your Satisfactory install's `/configs/` folder.
    - **HoverFlightIgnitionDelaySeconds**: (`0.375` sec by default) How long in seconds the jetpack waits to start fly when your suit is capable of hovering (ex. Hover Jetpack module installed). You may want to increase this value if you want to ensure you reach the apex of your jump before your jetpack turns on.
	- **RegularFlightIgnitionDelaySeconds**: (`0.375` sec by default) How long in seconds the jetpack waits to start fly when your suit is not capable of hovering (ex. Thrust Boots or Integrated Jetpack modules installed). You may want to increase this value if you want to ensure you reach the apex of your jump before your jetpack turns on.
	- **BypassIgnitionDelaysIfFalling**: (`true` by default) If the ignition delays should be bypassed if space is pressed while *falling*, which starts the jetpack immediately. With this setting enabled, the other two ignition delays will be ignored if you have negative Z velocity when you press spacebar. The purpose of this setting is to allow the jetpack to start quickly when falling, but still allow jumping around without triggering the jetpack too easily.
	- **GlobalVolumeMultiplier**: (`0.7` by default) Multiplier for all sounds produced by a PowerSuit. 0.0 is muted. 0.5 is 50% quieter. 1.5 is 50% louder. Remember that you can also modify this with the in-game volume sliders Effects and Master. This setting allows you to control just PowerSuit sounds as opposed to everything the game considers an Effect sound.