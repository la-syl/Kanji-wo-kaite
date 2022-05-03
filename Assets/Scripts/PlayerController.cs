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
    private Animator animator;

    // Start is called before the first frame update
    void Awake()
    {
        //rb2d = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
    }

    private void OnMove(InputValue movementValue)
    {
        Vector2 movementVector = movementValue.Get<Vector2>();
        movX = movementVector.x;
        movY = movementVector.y;

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
