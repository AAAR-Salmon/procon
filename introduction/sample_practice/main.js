function main(input) {
	// 入力を行ごとに分割
	input = input.split('\n');

	// 整数の入力
	let a = parseInt(input[0]);

	// 入力を空白で分割
	input[1] = input[1].split(' ');
	let b = parseInt(input[1][0]);
	let c = parseInt(input[1][1]);

	// 文字列の入力
	let s = input[2];

	// 出力
	console.log('%d %s', a+b+c, s);
}

// main関数に標準入力を与えて実行します
main(require('fs').readFileSync('/dev/stdin', 'utf8'));
