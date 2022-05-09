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
	public Transform referenceRoot;
	private GesturePatternDraw[] references;

	void Start () {
		references = referenceRoot.GetComponentsInChildren<GesturePatternDraw> ();
	}

	void ShowAll(){
		for (int i = 0; i < references.Length; i++) {
			references [i].gameObject.SetActive (true);
		}
	}

	public void OnRecognize(RecognitionResult result){
		StopAllCoroutines ();
		ShowAll ();
		if (result != RecognitionResult.Empty) {
			Debug.Log("Recognized!");
			textResult.text = result.gesture.id + "\n" + Mathf.RoundToInt (result.score.score * 100) + "%";
			int oldKanjiValue = DialogueLua.GetVariable("TotalNumberOfKanjisWritten").asInt;
			DialogueLua.SetVariable("TotalNumberOfKanjisWritten", oldKanjiValue+1);
		} else {
			textResult.text = "?";
		}
	}

	public void HonTest(RecognitionResult result) {
		if (result != RecognitionResult.Empty && result.gesture.id == "Hon")
		{
			Debug.Log("GG! Tu viens d'écrire le Kanji Hon! ");
			DialogueLua.SetVariable("wroteHon", true);
		}
	}

}
