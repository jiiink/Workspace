#define MAX_SIZE 100
#define FALSE 0
#define TRUE 1
#define SWAP(x,y,t) ( (t)=(x),(x)=(y),(y)=(t) )

typedef struct {
    int key;
} element;

element heap[MAX_SIZE];

int level (int n) {       // n��° node�� � level�� �ִ��� ���
    int count =0;      // max level �̸� TRUE  // min level �̸� FALSE
    while(n) {
        n/=2;
        count++;
    }
    return ( count%2 ) ?  FALSE : TRUE ;
}


void verify_max ( element heap[], int i, element item ) {  // ���� ������ node�� �� �ڸ��� ã�� �Լ��̴�.
    int grandparent = i / 4;                                               // i : ���� ���� node�� �θ� ��ġ
    while (grandparent ) {                                                 // grandparent : �θ��� �θ�...
        if ( item.key > heap[grandparent].key ) {
            heap[i] = heap[grandparent];
            i  = grandparent;
            grandparent /= 4;
        } else
            break;
        heap[i] = item;
    }

// verify_min �� �Ȱ���. verify_max if���� ���Ǹ� �ٲٸ� �ȴ�.

void min_max_insert (element heap[], int n, element item) {
    int parent;
    n++;
    if ( n == MAX_SIZE ) {
        printf("heap is full\n");
        return;
    }
    parent = n/2;
    if ( !parent ) heap[1] = item;       // parent == 0 �̸� ( n�� 1�̸� )
    else
        switch ( level ( parent ) ) {
        case FALSE :                          //  min level �϶�,
            if ( item.key < heap[parent].key ) {
                heap[n] = heap[parent];
                verify_min (heap, parent, item);
            } else
                verify_max(heap, n, item);
            break;
        case TRUE :                            // max level �϶�,
            if (item.key > heap[parent].key ) {
                heap[n] = heap[parent];
                verify_max(heap, parent, item);
            } else
                verify_min (heap, n, item );
        }
}
