#include "lib/chunk_test.h"
#include "lib/cli.h"
#include "lib/math_test.h"
#include "lib/os_main.h"
#include "lib/part.h"
#include "lib/str_test.h"
#include "lib/text.h"

static void os_main(void) {
    Test *test = test_begin();

    chunk_test(test);
    str_test(test);
    part_test(test);
    math_test(test);
    cli_test(test);

    test_end(test);
}
