#include <stdio.h>

// Look-up table for sno to name conversion
const char *sno_to_name[] = {
    "korupalli", "durga prasad", "sri latha", "sai navya sri", "ganga bhavani", "rama rao","satyanarayanaswamy", "venkateswaraswamy" };

// Function to get name representation of a Sno using table look-up
const char* getSnoName(int sno) {
    if (sno >= 0 && sno <= 7) {
        return sno_to_name[sno];
    } else 
        return "Invalid digit!";
}

int main() {
    int sno;

    // Ask user for a digit between 0 and 7
    printf("Enter a Sno (0 to 7): ");
    scanf("%d", &sno);

    // Get Name representation using table look-up
    const char *SnoName = getSnoName(sno);
    printf("The Sno %d is '%s'.\n", sno, SnoName);

    return 0;
}
/*Enter a Sno (0 to 7): 3
The Sno 3 is 'sai navya sri'.


=== Code Execution Successful ===*/
