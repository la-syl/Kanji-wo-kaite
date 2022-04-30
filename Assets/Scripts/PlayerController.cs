using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    //private Rigidbody2D rb2d;
    private float movX;
    private float movY;
    public float speed = 10;

    // Start is called before the first frame update
    void Start()
    {
        //rb2d = GetComponent<Rigidbody2D>();
    }

    private void OnMove(InputValue movementValue)
    {
        Vector2 movementVector = movementValue.Get<Vector2>();
        movX = movementVector.x;
        movY = movementVector.y;
    }

    private void OnInteract()
    {
        Debug.Log("Ca marche");
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        PlayerMove();
    }

    //Function that controls player movement
    private void PlayerMove() 
    {
        Vector2 movement = new Vector2(movX, movY);
        transform.Translate(movement * speed * Time.deltaTime);
    }
}
