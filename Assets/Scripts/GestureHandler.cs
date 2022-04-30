using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GestureRecognizer;
using System.Linq;

public class GestureHandler : MonoBehaviour {
	public void OnRecognize(RecognitionResult result){
		Debug.Log("Wesh!");

		if (result != RecognitionResult.Empty) {
			Debug.Log("Recognized " + result.gesture.id);
		} else {
			Debug.Log("Not recognized");
		}
	}
}
