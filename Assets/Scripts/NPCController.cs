using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCController : MonoBehaviour
{
    private Animator animator;
    public GameObject player;

    private float playerX;
    private float playerY;
    private float npcX;
    private float npcY;
    private float distX;
    private float distY;

    void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        playerX = player.transform.position.x;
        playerY = player.transform.position.y;
        npcX = transform.position.x;
        npcY = transform.position.y;
        distX = Mathf.Abs(npcX - playerX);
        distY = Mathf.Abs(npcY - playerY);
    }

    private void FixedUpdate()
    {
        if (playerY > npcY && distX < distY) {
            animator.SetFloat("Y", 1);
            animator.SetFloat("X", 0);
        } else if (playerY < npcY && distX < distY) {
            animator.SetFloat("Y", -1);
            animator.SetFloat("X", 0);
        } else if (playerX > npcX && distX > distY) {
            animator.SetFloat("X", 1);
            animator.SetFloat("Y", 0);
        } else if (playerX < npcX && distX > distY) {
            animator.SetFloat("X", -1);
            animator.SetFloat("Y", 0);
        }
    }
}
