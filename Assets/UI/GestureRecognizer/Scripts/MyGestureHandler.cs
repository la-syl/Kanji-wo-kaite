using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GestureRecognizer;
using System.Linq;
using TMPro;
using System;
using PixelCrushers.DialogueSystem;

public class MyGestureHandler : MonoBehaviour {

	public TMP_Text textResult;
	public TMP_Text score;
	public Transform referenceRoot;
	private GesturePatternDraw[] references;

	//Quest variables
	public GameObject JishoButton;
	private int timesHonWritten = 0;
	private RecognitionResult cachedResult;

	void Start () {
		references = referenceRoot.GetComponentsInChildren<GesturePatternDraw> ();
	}

	public void OnRecognize(RecognitionResult result){
		//StopAllCoroutines ();
		if (result != RecognitionResult.Empty) {
			Debug.Log("Recognized!");
			cachedResult = result;
			textResult.text = result.gesture.id;
			score.text = Mathf.RoundToInt(result.score.score * 100) + "%";
			int oldKanjiValue = DialogueLua.GetVariable("TotalNumberOfKanjisWritten").asInt;
			DialogueLua.SetVariable("TotalNumberOfKanjisWritten", oldKanjiValue+1);
		} else {
			textResult.text = "Try again";
		}
	}

	public void KanjiCheck() {

		//Book - Origin - Japan
		if (cachedResult.gesture.id == "Hon")
		{
			bool LearnedHon = DialogueLua.GetVariable("wroteHon").asBool;

			//Checking to see if hon learning event was started or completed
			if (QuestLog.GetQuestState("quest_Hon") != QuestState.Unassigned)
			{
				//Checking if Kanji was learned
				if (LearnedHon == false)
				{
					DialogueLua.SetVariable("wroteHon", true);
					JishoButton.SetActive(true);
					DialogueManager.ShowAlert("You have learned a new Kanji! GG!");
				}

				//Incrementing number of times this Kanji was written
				timesHonWritten++;

				//Alerts for congratulation
				if (timesHonWritten == 10)
				{
					DialogueManager.ShowAlert("You have written " + timesHonWritten + " times!");
				}
			}
		}

		//Numbers 1 - 10
		if (cachedResult.gesture.id == "Ichi") 
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Ni")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "San")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Yon")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Go")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Roku")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Nana")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Hachi")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Kyuu")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
		if (cachedResult.gesture.id == "Djuu")
		{
			Debug.Log("You have written " + cachedResult.gesture.id);
		}
	}

}
