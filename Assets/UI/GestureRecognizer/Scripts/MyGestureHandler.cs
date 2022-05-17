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

	//HonQuest variables
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
		if (cachedResult.gesture.id == "Hon")
		{

			bool LearnedHon = DialogueLua.GetVariable("wroteHon").asBool;

			if (LearnedHon == false) {
				DialogueLua.SetVariable("wroteHon", true);
				JishoButton.SetActive(true);
			}

			Debug.Log("GG! Tu viens d'écrire le Kanji Hon! ");
			timesHonWritten++;

			if (timesHonWritten == 10) {
				DialogueManager.ShowAlert("You have written " + timesHonWritten + " times!");
			}
		}
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
	}

}
