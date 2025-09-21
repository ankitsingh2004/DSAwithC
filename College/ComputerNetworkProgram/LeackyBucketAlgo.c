#include <stdio.h>
#define BUCKET_SIZE 10

int main()
{
    int n, i, pkt_size, bucket = 0, rate;
    printf("Enter the number of packets: ");
    scanf("%d", &n);
    printf("Enter the output rate: ");
    scanf("%d", &rate);

    for (i = 1; i <= n; i++)
    {
        printf("Packet %d size: ", i);
        scanf("%d", &pkt_size);

        // Check if packet size exceeds bucket size
        if (pkt_size > BUCKET_SIZE)
        {
            printf("Packet size > Bucket size - Packet Discarded\n");
        }
        // Check for bucket overflow
        else if (bucket + pkt_size > BUCKET_SIZE)
        {
            printf("Bucket Overflow - Packet Discarded\n");
        }
        else
        {
            bucket += pkt_size;
            printf("Packet added to bucket. Current bucket size: %d\n", bucket);
        }
        // Leak (send) packets at output rate
        if (bucket > 0)
        {
            int send = (bucket < rate) ? bucket : rate;
            bucket -= send;
            printf("Sent %d packets, Bucket now: %d\n", send, bucket);
        }
    }
    // Flush remaining packets
    while (bucket > 0)
    {
        int send = (bucket < rate) ? bucket : rate;
        bucket -= send;
        printf("Sent %d packets, Bucket now: %d\n", send, bucket);
    }
    return 0;
}

// Enter number of packets: 3
// Enter output rate: 2

// Packet 1 size: 5
// Packet 2 size: 4
// Packet 3 size: 3

// output
// Packet 1 size: 5
// Packet added to bucket. Current bucket size: 5
// Sent 2 packets, Bucket now: 3

// Packet 2 size: 4
// Packet added to bucket. Current bucket size: 7
// Sent 2 packets, Bucket now: 5

// Packet 3 size: 3
// Packet added to bucket. Current bucket size: 8
// Sent 2 packets, Bucket now: 6

// Sent 2 packets, Bucket now: 4
// Sent 2 packets, Bucket now: 2
// Sent 2 packets, Bucket now: 0
