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

			if ((oldKanjiValue + 1) % 10 != 0) 
			{ 
			
			}
		} else {
			textResult.text = "Try again";
			score.text = "0";
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
					//Set Kanji learned bool as true and congratulate user.
					DialogueLua.SetVariable("wroteHon", true);
					JishoButton.SetActive(true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Hon. That means book.");
					DialogueManager.ShowAlert("Writting this Kanji made a book appeared out of nowhere!! That's crazy!!!");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);

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
		if (QuestLog.GetQuestState("quest_Numbers") != QuestState.Unassigned) 
		{
			if (cachedResult.gesture.id == "Ichi")
			{
				bool LearnedIchi = DialogueLua.GetVariable("wroteIchi").asBool;

				if (LearnedIchi == false) 
				{ 
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteIchi", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Ichi. That means 1.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
			}
			if (cachedResult.gesture.id == "Ni")
			{
				bool LearnedNi = DialogueLua.GetVariable("wroteNi").asBool;

				if (LearnedNi == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteNi", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Ni. That means 2.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "San")
			{
				bool LearnedSan = DialogueLua.GetVariable("wroteSan").asBool;

				if (LearnedSan == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteSan", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji San. That means 3.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "Yon")
			{
				bool LearnedYon = DialogueLua.GetVariable("wroteYon").asBool;

				if (LearnedYon == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteYon", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Yon. That means 4.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
			}
			if (cachedResult.gesture.id == "Go")
			{
				bool LearnedGo = DialogueLua.GetVariable("wroteGo").asBool;

				if (LearnedGo == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteGo", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Go. That means 5.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "Roku")
			{
				bool LearnedRoku = DialogueLua.GetVariable("wroteRoku").asBool;

				if (LearnedRoku == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteRoku", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Roku. That means 6.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "Nana")
			{
				bool LearnedNana = DialogueLua.GetVariable("wroteNana").asBool;

				if (LearnedNana == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteNana", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Nana. That means 7.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
			}
			if (cachedResult.gesture.id == "Hachi")
			{
				bool LearnedHachi = DialogueLua.GetVariable("wroteHachi").asBool;

				if (LearnedHachi == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteHachi", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Hachi. That means 8.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "Kyuu")
			{
				bool LearnedKyuu = DialogueLua.GetVariable("wroteKyuu").asBool;

				if (LearnedKyuu == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteKyuu", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Kyuu. That means 9.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
			if (cachedResult.gesture.id == "Djuu")
			{
				bool LearnedDjuu = DialogueLua.GetVariable("wroteDjuu").asBool;

				if (LearnedDjuu == false)
				{
					Debug.Log("You have written " + cachedResult.gesture.id);
					DialogueLua.SetVariable("wroteDjuu", true);
					DialogueManager.ShowAlert("Congratulation! You have learned the Kanji Djuu. That means 10.");

					//Increment total number of Kanjis learned in the game.
					int kanjisFound = DialogueLua.GetVariable("KanjisFound").asInt;
					DialogueLua.SetVariable("KanjisFound", kanjisFound + 1);
				}
				
			}
		}
			
	}

}
