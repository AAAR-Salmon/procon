S=input()
# Pythonでは文字列の一部に代入することができません
# 変更したい箇所の前後と変更後の文字列を結合して実現します
# S[-1]はSの最後の文字を表し、S[:-1]はSの最後の文字よりも前の部分を表します
print(S[:-1] + '5')
