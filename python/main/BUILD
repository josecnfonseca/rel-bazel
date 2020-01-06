

py_library(
    name = "hello-greet",
    srcs = ["hellogreet.py"],
)

py_binary(
    name = "hello-world",
    srcs = ["hello-world.py"],
    deps = [
        ":hello-greet",
        "//lib:hello-time",
    ],
)
