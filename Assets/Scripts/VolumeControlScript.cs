using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolumeControlScript : MonoBehaviour
{
    FMOD.Studio.EventInstance fmodEvent;
    FMOD.Studio.Bus music;
    FMOD.Studio.Bus SFX;

    float MusicVolume = 1.0f;
    float SFXVolume = 1.0f;

    void Start()
    {
        music = FMODUnity.RuntimeManager.GetBus("bus:/Music"); 
        SFX = FMODUnity.RuntimeManager.GetBus("bus:/SFX");
        fmodEvent = FMODUnity.RuntimeManager.CreateInstance("event:/UI/ConversationStart");
    }

    // Update is called once per frame
    void Update()
    {
        music.setVolume(MusicVolume);
        SFX.setVolume(SFXVolume);
    }

    public void MusicVolumeChange(float newMusicVolume) 
    {
        MusicVolume = newMusicVolume;
    }

    public void SFXVolumeChange(float newSFXVolume)
    {
        SFXVolume = newSFXVolume;

        FMOD.Studio.PLAYBACK_STATE pbState;
        fmodEvent.getPlaybackState(out pbState);
        if (pbState != FMOD.Studio.PLAYBACK_STATE.PLAYING)
        {
            fmodEvent.start();
        }
    }
}
