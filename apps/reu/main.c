#include <stdint.h>
#include <string.h>

#include "printf.h"
#include "runtime.h"

int main() {
    printf("Ariane says Hello!\n");
    volatile int k;
    start_timer();
    for (int i = 0; i < 10; i++)
        k++;
    stop_timer();

    // Metrics
    int64_t runtime = get_timer();
    printf("The execution took %d cycles.\n", runtime);

    return 0;
}
