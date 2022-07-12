//1.JS-ով իրականացնել ֆունկցիա, որը շրջում է տողը և վերադարձնում շրջված տարբերակը

function flipStr(str) {
    let newStr = "";

    for (let i = str.length - 1; i >= 0; i--) { 
        newStr += str[i]; 
    }
    return newStr; 
}

console.log(flipStr('asdf'));

//2.Իրականացնել բինար որոնում թվային զանգվածի համար, ռեկուրսիվ և իտերատիվ տարբերակներով

function recursiveSolution(arr, num) {
    let midPoint =  arr[Math.floor(arr.length / 2)];
 
    if (midPoint === num) {
        return true;
    } 
    else if (midPoint < num && arr.length > 1) {
      return solution(arr.slice(arr.indexOf(midPoint), arr.length), num);
    }
    else if (midPoint > num && arr.length > 1) {
      return solution(arr.slice(0, arr.indexOf(midPoint)), num);
    }
    return false;
  }

  console.log(solution([4,9,20,34,46,50,72], 72)); 

//iterative
function iterativeSolution(arr, num) {
    let firstIndex = 0;
    let lastIndex = arr.length - 1;
  
    while (firstIndex <= lastIndex) {
        let midPoint = Math.floor((firstIndex + lastIndex) / 2);
        if (arr[midPoint] === num) {
            return true;
        }
        else if (arr[midPoint] < num) {
            firstIndex = midPoint + 1;
        }
        else {
            lastIndex = midPoint - 1;
        }
    }
    return false;
}
console.log(iterativeSolution([4, 9, 20, 34, 46, 50, 72], 46)); 
