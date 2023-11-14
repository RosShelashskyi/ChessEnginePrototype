//This file will contain all the functions for testing code;
#pragma once
#include "typesAndMacros.h"
#include "pieces.h"
#include "board.h"
#include "board.c"
#include "moveGenerator.c"

void testKingMoves(){
    setBoards();
    INT board = 0;
    INT wboard = 0;
    INT bboard = 0;
    piece k;
    piece pawn;
    k.position = 0x8000000000000000;
    k.type = KING;
    k.color = WHITE;

    board = board | k.position;
    wboard = k.position;
    bboard = 0;

    int moveCount = 0;
    INT *moves = generateMoves(&k, board, wboard, bboard, &moveCount);

    INT m = 0;

    for(int i = 0; i < moveCount; i++){
        printf("%llx\n", moves[i]);
        m = m | moves[i];
    }

    //Linux version
    //printf("%lx\n", m);
    //Mac version
    printf("%llx\n", m);
}