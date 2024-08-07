# Complete Save System

A comprehensive save system for Unreal Engine projects, enabling seamless saving and loading functionalities.

## Table of Contents
- [Setting Up](#setting-up)
    - [BP_SavingComponent](#bp_savingcomponent)
    - [I_Savable Interface](#i_savable-interface)
    - [Saving](#saving)
    - [Loading](#loading)
    - [Custom Save Slot](#custom-save-slot)
    - [Settings System](#settings-system)
    - [Thumbnail Camera](#thumbnail-camera)
- [Actors](#actors)
    - [BP_CheckPoint](#bp_checkpoint)
    - [BP_SaveGameActor](#bp_savegameactor)
- [Widgets](#widgets)
    - [WBP_SaveSlotElement](#wbp_saveslotelement)
    - [WBP_SaveSlotList](#wbp_saveslotlist)
    - [WBP_Loading](#wbp_loading)
    - [WBP_Pause](#wbp_pause)
    - [WBP_SaveAction](#wbp_saveaction)
    - [WBP_AutoSave](#wbp_autosave)
    - [WBP_ConfirmationModal](#wbp_confirmationmodal)
- [Helper Functions and Macros](#helper-functions-and-macros)
    - [GetTextureSaveData](#gettexturesavedata)
    - [GetRenderTargetSaveData](#getrendertargetsavedata)
    - [LoadImage](#loadimage)
    - [ConvertRenderTargetToTexture2D](#convertrendertargettotexture2d)
    - [CreateMaterialFromData](#creatematerialfromdata)
    - [CreateUIMaterialFromData](#createuimaterialfromdata)
    - [GetPlayerControllerAsSavable](#getplayercontrollerassavable)
    - [GetSavingComponent](#getsavingcomponent)

## Setting Up

### BP_SavingComponent
Add the `BP_SavingComponent` to your Player Controller Class to start implementing the plugin.

#### Overridable Settings:
- **Override Save Slot Data:** If you want to implement your save slots manually.
- **Default Input Type:** Set the default input type when returning from Widgets.

### I_Savable Interface
Implement the `I_Savable Interface` after adding the `BP_SavingComponent`.

### Saving
1. Create a blueprint class inheriting from the `ParentSaveGame` C++ Class.
2. Implement the `CreateSaveGame` function in your Player Controller Class.

Call the UI (passing `false` in the `is Load`) or the `Save Function` with the slot index to save your game.

### Loading
Implement the `LoadGame` event on your Player Controller class. Remember to call the `Finish Loading` function after exiting the event.

Call the `OpenUI` function (with `true` in the `Is Load`) or the `start loading` function with the slot number to load your game.

### Custom Save Slot
1. Check the `Override Save Slot Data` parameter in the `BP_SavingComponent`.
2. Implement the `Create Custom Save Slot` function in your Player Controller Class.

### Settings System
1. Modify the `S_Settings` structure.
2. Implement the `Update Settings` function in your Player Controller Class.
3. Modify the `SetDefaultSettings` event on the `BP_SavingComponent`.

### Thumbnail Camera
Add the `BP_ThumbnailCamera` Actor inside the Core folder in the plugin content.

## Actors

### BP_CheckPoint
A checkpoint triggered once, with logic to save its state.

### BP_SaveGameActor
An actor for the player to manually save the game, with customizable save button.

## Widgets

### WBP_SaveSlotElement
Child Widget used to populate the Save Slot List.

### WBP_SaveSlotList
Displays current save slots, acting as a save or loading screen based on the `bIsLoad` parameter.

### WBP_Loading
Widget with a loading animation.

### WBP_Pause
Example of a pause menu with save and load functions.

### WBP_SaveAction
Widget for the `BP_SaveGameActor` to display the save button.

### WBP_AutoSave
Widget showing the autosave animation.

### WBP_ConfirmationModal
A modal with loading animation and logic, configurable with `Set Parameters` functions.

## Helper Functions and Macros

### GetTextureSaveData
Generates a `SaveTextureData` structure from a `Texture2D`.

### GetRenderTargetSaveData
Generates `SaveTextureData` from a `TexureRenderTarget2D`.

### LoadImage
Decompresses `SaveTextureData` to return a `Texture2D`.

### ConvertRenderTargetToTexture2D
Converts `TexureRenderTarget2D` to `Texture2D`.

### CreateMaterialFromData
Returns a `Material Instance` from `SaveTextureData`.

### CreateUIMaterialFromData
Function to create a UI Material from `SaveTextureData`.

### GetPlayerControllerAsSavable
Gets the Player Controller and casts it to the `I_Savable` interface.

### GetSavingComponent
Gets the `BP_SavingComponent` inside the Player Controller.
