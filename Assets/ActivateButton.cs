using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers.DialogueSystem;

public class ActivateButton : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Activate();
    }

    void Activate() 
    {
        if (QuestLog.GetQuestState("quest_Hon") != QuestState.Unassigned)
        {
            gameObject.SetActive(true);
        }
    }
}
