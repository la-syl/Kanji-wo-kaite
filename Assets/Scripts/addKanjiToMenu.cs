using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;

public class addKanjiToMenu : MonoBehaviour
{

    void Start()
    {
        if (DialogueLua.GetVariable("wroteHon").asBool == false) {
            gameObject.SetActive(false);
        } else if (DialogueLua.GetVariable("wroteHon").asBool == true) {
            gameObject.SetActive(true);
        }
    }

}
