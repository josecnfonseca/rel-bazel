load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "chess",
    srcs = ["Chess.h"],
    hdrs = ["Board.cpp","ChessUtility.cpp","Move.cpp","Piece.cpp"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":chess",
    ],
)
