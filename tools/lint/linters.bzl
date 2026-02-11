load("@aspect_rules_lint//lint:clang_tidy.bzl", "lint_clang_tidy_aspect")

clang_tidy = lint_clang_tidy_aspect(
    binary = Label(":clang_tidy"),
    global_config = [Label(":clang_tidy_config")],
    lint_target_headers = True,
)
