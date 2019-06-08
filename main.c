#include <janet.h>

int main() {
    janet_init();
    JanetTable *env = janet_core_env(NULL);
    janet_dostring(env, "(print :hello!)", "main", NULL);
    janet_deinit();
}
