use std::f64::consts::E;

// Function to calculate the k-th term of the series
fn term(x: f64, k: u32) -> f64 {
    (2 * k + 1) as f64 * x.powi(2 * k as i32) / (factorial(k) as f64)
}

// Function to calculate factorial (helper for term calculation)
fn factorial(n: u32) -> u64 {
    (1..=n as u64).product()
}

// Function to calculate the series sum with a fixed number of terms n
fn sum1(x: f64, n: u32) -> f64 {
    let mut z = 0.0;
    for k in 0..=n {
        z += term(x, k);
    }
    z
}

// Function to calculate the series sum with a specified precision eps
fn sum2(x: f64, eps: f64) -> f64 {
    let mut z = 0.0;
    let mut ak: f64 = 1.0; // Ensure `ak` is of type f64
    let mut k = 0;

    while ak.abs() > eps {
        ak = term(x, k);
        z += ak;
        k += 1;
    }

    z
}

// Function to calculate the exact value of y(x)
fn y(x: f64) -> f64 {
    (1.0 + 2.0 * x * x) * E.powf(x)
}

fn main() {
    let x1 = 0.0;
    let x2 = 1.0; // Range for x
    let k = 10; // Number of points

    // Take input for n
    println!("Enter the number of terms n:");
    let mut input_n = String::new();
    std::io::stdin().read_line(&mut input_n).unwrap();
    let n: u32 = input_n.trim().parse::<u32>().expect("Failed to parse input for n");

    // Take input for delta
    println!("Enter the accuracy delta:");
    let mut input_delta = String::new();
    std::io::stdin().read_line(&mut input_delta).unwrap();
    let delta: f64 = input_delta.trim().parse::<f64>().expect("Failed to parse input for delta");

    // Print table header
    println!("{:>10} {:>15} {:>15} {:>15}", "x", "Sn (Fixed n)", "Se (Accuracy)", "y(x)");
    println!("{}", "-".repeat(55));

    // Loop to calculate and print values for each x
    for j in 1..=k {
        let x = x1 + (x2 - x1) * (j as f64 - 1.0) / 9.0;
        let sn = sum1(x, n); // Sum with fixed n terms
        let se = sum2(x, delta); // Sum with specified accuracy
        let exact = y(x); // Exact value of the function

        // Print values in table format
        println!("{:>10.5} {:>15.5} {:>15.5} {:>15.5}", x, sn, se, exact);
    }
}

