# Header Edits

This mod edits a few of the Satisfactory headers to make some functions and variables accessible to Blueprints when they are normally private. If you decide to clone the project and set it up yourself, you will error on compile if you don't make these header edits yourself

Below is a list of all header edits required

* (Unknown) Header Edits from PowerSuit
	* Nog has made a few header edits to make PowerSuit possible. I compile PowerSuit myself as well, so I also have these header edits. I may have inadvertently used something that is not normally blueprint accessible that Nog's edits have exposed.
* FGCharacterPlayer.h - mInRadioactiveZone
	* Needed for Hazmat module to accurately determine if we're in radiation. Get Radiation Intensity lies about the value if we have suddenly left radiation as opposed to gradually. Ask me on discord for more info.

```c++
	
// ROB MODDING EDIT
public:
	/** Are we in a radioactive zone */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_InRadioActiveZone )
	bool mInRadioactiveZone;

```