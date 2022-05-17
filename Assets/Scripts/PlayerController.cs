using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerController : MonoBehaviour
{
    private Rigidbody2D rb2d;
    private float movX;
    private float movY;
    public float speed = 10;
    private Animator animator;

    private Vector2 movement = Vector2.zero;
    private Vector2 movementVector = Vector2.zero;

    // Start is called before the first frame update
    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
    }

    private void OnMove(InputValue movementValue)
    {
        movementVector = movementValue.Get<Vector2>();
        movX = movementVector.x;
        movY = movementVector.y;

        Debug.Log("Joystick Movement Detected");
        Debug.Log("X value: " + movX + " - Y value: " + movY);

        if (movX != 0 || movY != 0)
        {
            animator.SetFloat("X", movX);
            animator.SetFloat("Y", movY);
            animator.SetBool("IsWalking", true);
        }
        else 
        {
            animator.SetBool("IsWalking", false);
        }
    }

    private void OnInteract()
    {
        Debug.Log("Ca marche");
    }

    void FixedUpdate()
    {
        PlayerMove();
        Debug.Log("movement vector : " + movementVector);
    }

    //Function that controls player movement
    private void PlayerMove() 
    {
        movement.Set(movX, movY);
        rb2d.velocity = movement * speed * Time.deltaTime;
        Debug.Log("Current player speed : " + movement);
    }
}
