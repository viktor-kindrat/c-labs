fn main() {
    let arr: [f64; 36] = [
        -3.5, -2.1, -4.3, 0.1, 0.2, -1.5, 5.2, -6.7, 7.8, 3.4, -2.9, 8.2, -9.4, 4.3, -5.1, 6.6,
        1.2, -3.2, 0.8, 2.1, -8.9, 7.0, 4.5, -3.1, 1.8, -4.0, 9.5, 2.8, -6.2, -1.1, 3.9, 2.7,
        4.6, 0.3, -0.2, -7.1,
    ];

    let mut negatives: Vec<(f64, usize)> = vec![];
    let mut positives: Vec<(f64, usize)> = vec![];

    // Find all negative and positive elements with their indices
    for (i, &num) in arr.iter().enumerate() {
        if num < 0.0 {
            negatives.push((num, i));
        } else if num > 0.0 {
            positives.push((num, i));
        }
    }

    // Sort negatives in descending order and positives in ascending order
    negatives.sort_by(|a, b| b.0.partial_cmp(&a.0).unwrap());
    positives.sort_by(|a, b| a.0.partial_cmp(&b.0).unwrap());

    // Get the second largest negative and the first smallest positive
    let second_largest_negative = negatives.get(1).expect("Not enough negative elements");
    let first_smallest_positive = positives.get(0).expect("Not enough positive elements");

    // Get their indices
    let neg_index = second_largest_negative.1;
    let pos_index = first_smallest_positive.1;

    // Determine the range between these two indices
    let (start, end) = if neg_index < pos_index {
        (neg_index + 1, pos_index)
    } else {
        (pos_index + 1, neg_index)
    };

    // Calculate the sum of squares of elements in this range
    let sum_of_squares: f64 = arr[start..end]
        .iter()
        .map(|&x| x.powi(2))
        .sum();

    println!("Second largest negative: {}", second_largest_negative.0);
    println!("First smallest positive: {}", first_smallest_positive.0);
    println!(
        "Sum of squares between indices {} and {}: {}",
        start, end, sum_of_squares
    );
}
