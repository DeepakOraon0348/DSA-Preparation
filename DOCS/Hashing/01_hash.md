# Hashing | Maps | Time Complexity | Collisions | Division Rule of Hashing | Strivers A2Z DSA Course

45

## Hashing:

- Let’s first try to understand the importance of hashing using an example:

- Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. For each query, we need to find out how many times the number appears in the array. For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0.

- Similarly, the following will be the answers to the given queries:

### Brute Force approach:

As we have learned the ‘for loop’, the first approach that should come to our mind is to use it to solve this problem. For each query, we will iterate over the array using a loop. We will count the number of times the query number appears in that array i.e. increment the counter variable if the array element at that index equals the query number. In terms of function, it will look like the following:

```c++
    int f(number, a[]){
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==number)
                cnt=cnt+1;
        }
        return cnt;
    }
```

## Optimized approach using Hashing:

### Definition of Hashing:

In order to optimize this approach, we need to use hashing. If we say the definition of hashing in a naive way, it is nothing but the combination of the steps, pre-storing, and fetching.

- Step 1 - Pre-storing: In this step, we will create an array(named hash array) of size 13(so that we can get the index 12) initialized with 0. In this hash array, we are going to store the frequency of each element(i.e. The number of times each element appears in the array) of the given array. To do so, we will iterate over the given array, and for each element arr[i], we will do hash[arr[i]] += 1. After completing this process the hash array will look like the following:

This step is named pre-storing as we are pre-calculating the information about the element of the array before answering the queries.

- Step 2 - Fetching: In this step, we will select each query i.e. the number and for the query, we will just fetch the value of hash[number] and return it instead of running a ‘for loop’ every time.

```c++
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}
```
## Point to remember:
We may encounter a problem where the maximum array element may be very large like 109. In that case, theoretically, we should declare an array of size 109+1. But we cannot do so. The maximum size of an array can be the following:

```python
class Car(models.Model):

    TRANSMISSION_CHOICES = [
        ('Manual', 'Manual'),
        ('Automatic', 'Automatic'),
    ]

    FUEL_CHOICES = [
        ('Petrol', 'Petrol'),
        ('Diesel', 'Diesel'),
        ('CNG', 'CNG'),
        ('Electric', 'Electric'),
        ('Hybrid', 'Hybrid'),
    ]

    STATUS_CHOICES = [
        ('Available', 'Available'),
        ('Booked', 'Booked'),
        ('Maintenance', 'Maintenance'),
    ]

    vendor = models.ForeignKey(
        VendorLogin,
        on_delete=models.CASCADE,
        related_name='cars'
    )

    # Basic Details
    car_name = models.CharField(max_length=100)
    brand = models.CharField(max_length=100)
    model = models.CharField(max_length=100)
    year = models.PositiveIntegerField()

    # Location
    city = models.CharField(max_length=100)
    pickup_location = models.CharField(max_length=200)

    # Pricing
    rent_per_day = models.DecimalField(max_digits=10, decimal_places=2)

    # Vehicle Details
    fuel_type = models.CharField(
        max_length=20,
        choices=FUEL_CHOICES
    )

    transmission = models.CharField(
        max_length=20,
        choices=TRANSMISSION_CHOICES
    )

    seats = models.PositiveIntegerField()

    mileage = models.PositiveIntegerField()

    # Features
    ac = models.BooleanField(default=True)
    power_steering = models.BooleanField(default=True)
    power_windows = models.BooleanField(default=True)
    music_system = models.BooleanField(default=False)
    airbags = models.BooleanField(default=True)
    gps = models.BooleanField(default=False)

    # Images
    image = models.ImageField(
        upload_to='cars/',
        blank=True,
        null=True
    )

    # Status
    status = models.CharField(
        max_length=20,
        choices=STATUS_CHOICES,
        default='Available'
    )

    description = models.TextField(
        blank=True,
        null=True
    )

    created_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.brand} {self.model}"

```
