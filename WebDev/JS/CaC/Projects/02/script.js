// BMI = W(kg) / H(m2)

const form = document.querySelector("form");
// console.log(form)

form.addEventListener("submit", (e) => {
  e.preventDefault();

  const h = parseInt(document.querySelector("#height").value);
  const w = parseInt(document.querySelector("#weight").value);
  const results = document.querySelector("#results");

  if (h === "" || h < 0 || isNaN(h)) {
    results.innerHTML = "Enter a Valid Height";
  } else if (w === "" || w < 0 || isNaN(w)) {
    results.innerHTML = "Enter a Valid Weight";
  } else {
    const bmi = ((10000 * w) / (h * h)).toFixed(2);
    if (bmi > 24.9) {
      message = "Overweight";
    }
    if (bmi > 24.9) {
      message = "Overweight";
    } else if (bmi <= 24.9 && bmi > 18.6) {
      message = "Normal weight";
    } else {
      message = "Under weight";
    }
    results.innerHTML = `<span>Your BMI: ${bmi}</span>
    <div>${message}</div>`;
  }
});
