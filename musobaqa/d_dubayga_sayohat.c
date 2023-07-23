//#include <stdio.h>

//int main()
//{
//	int person_number;
//	scanf("%d", &person_number);
//	int participants[person_number];
//
//	for(int i = 0; i < person_number; i++){
//		scanf("%d", &participants[i]);
//	}
//
//	for(){}


//	return 0;
//}
#if 0
#include <stdio.h>
#include <stdlib.h>

int find_traveler(int n, int participants[]) {
    // Guruh azolarini e'lon qilamiz
    int group_members[n];
    for (int i = 0; i < n; ++i) {
        group_members[i] = i + 1;
		printf("%d", group_members[i]);
    }
	puts("");

    // Har bir guruh azosining juftliklarini hisoblaymiz
    int juftliklar[n - 1];
    for (int i = 0; i < n - 1; ++i) {
        juftliklar[i] = abs(participants[i] - participants[i + 1]) % 2 == 0;
		printf("%d",juftliklar[i]);
    }

	

    // Juftliklar ro'yxatida tartib raqamini topamiz
    int tartib_raqami = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (juftliklar[i]) {
            tartib_raqami = i + 1;
            break;
        }
    }

    return tartib_raqami;
}

int main() {
    int n;
    scanf("%d", &n);

    int participants[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &participants[i]);
    }

    int result = find_traveler(n, participants);
    printf("%d\n", result);

    return 0;
}
#endif
#if 0
#include <stdio.h>
#include <stdlib.h>

int find_traveler(int N, int numbers[]) {
    // Guruh azolarini e'lon qilamiz
    int group_members[N];
    for (int i = 0; i < N; ++i) {
        group_members[i] = i + 1;
    }

    // Juftliklar ro'yxatida tartib raqamini topamiz
    int tartib_raqami = -1;
    for (int i = 0; i < N - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) % 2 == 0) {
            tartib_raqami = i + 2;
            break;
        }
    }

    return tartib_raqami;
}

int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &numbers[i]);
    }

    int result = find_traveler(N, numbers);
    printf("%d\n", result);

    return 0;
}
#endif
#if 1
#include <stdio.h>
#include <stdlib.h>

int find_traveler(int N, int numbers[]) {
	int juf[N];
	int to[N];

	int index;
    for (int i = 0, j = 0, k = 0; i < N; ++i) {
		if(!(numbers[i]%2)){
			juf[j++] = i;
		}else if(numbers[i]%2){
			to[k++] = i;
		}
    }
	for(int i = 0; i < N-1; ++i){
		index = juf[i] == 0 ? to[i] : juf[i];
		if(juf[i] == 0){
			break;
		}
		else if(to[i] == 0){
			break;
		}
	}

    return index;
}

int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &numbers[i]);
    }

    int result = find_traveler(N, numbers);
    printf("\n%d\n", result+1);

    return 0;
}

#endif
