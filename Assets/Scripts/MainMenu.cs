//This script is used to control the behaviour of the buttons in the main menu.

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
//Start a new game
    public void NewGame()
    {
        SceneManager.LoadScene("Scenes/TitleCap1");
    }

//Continue game
    public void ContinueGame() 
    { 
    
    }

//Close the game
    public void EndGame()
    {
        Application.Quit();
    }
}
