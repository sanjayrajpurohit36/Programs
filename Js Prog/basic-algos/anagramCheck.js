// WAP To Check if two different words are made using same letters!
// Ex : str1 = 'below', str2 = 'elbow'

const anagramCheck2 = (str1, str2) => {
  return str1.split('').sort().join('') === str2.split('').sort().join('');
};
console.log(anagramCheck2('Agentleman', 'Elegantman'));
