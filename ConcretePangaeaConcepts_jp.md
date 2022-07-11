# Concrete Pangaea (仮)  v.1.1, v.1.2

## What's Concrete Pangaea?

// Spec. と Reference implemtantation の説明とそれらの違いと立ち位置

Pangaea Specificationのリファレンス実装の一つです。
Specificationを抽象Pangaeaとしたときの、実装第一号である具象パンゲアです。
あくまでPangaea規格の実装の一つと捉えています。

// Spec. / 今回の実装 / 今回のもの、将来作られるものを含めた全ての実装の総称、がごっちゃになり分かりにくい...
// Concreate Pangaea Column-stagger CP-Col? 良い名前
// そもそもConcreteが日本語のコンクリートを連想してしまってデザインコンセプトと合わない。（現代の都市のイメージではない）

## How Pangaea works?

// White paperより。接続パーツが存在するかどうかも実装依存である、と解釈したのでこちらに移動。
// 主要機能はこの節。オプショナルは次節。

どうなっているのか

- 島と島の相対位置は、接続パーツで連結。自由に可動・固定ができます。
    - 例えば、レール上にスリットを開けたプレートを組み合わせることで、連続的に位置と角度が調整できます。
    
    <img src="images/WhitePaper_Mech1.jpeg" alt="alt text" style="width:30%">    <img src="images/WhitePaper_Mech2.jpeg" alt="alt text" style="width:30%">

- 島同士の電気的な接続は、ワイヤーなどフレキシブルな配線を使うことで結線したまま島を動かせます。
- 島は規格にしたがって自由に置き換え・拡張ができます。
- 追加の要素も自由に接続可能です。
    - 追加のキー、ロータリーエンコーダー
    - トラックボール（今後検証予定）

    <img src="images/WhitePaper_Add1.jpeg" alt="alt text" style="width:30%">

## What are the attractive points of　Concrete Pangaea?

キーボードの大陸移動説をテーマに名付けたPangaea。
Concrete Pangaeaではこのコンセプトに合わせてプレートの装飾にも地形学的モチーフを取り入れました。

// ProMicroカバーの装飾は、等高線をイメージして、地図のような雰囲気を表しています。
// ライティングは、プレートの一部を半透明にして前面を光らせています。LEDの光で浮かび上がる模様は、河川やマグマの流れ『大地のエネルギー』を表しています。

## Where Pangaea going?

今後の展望

### ハードウェアの展望

- レイアウトの異なるパーツのバリエーション
- ロウ・スタッガード配列
- オーソリニア

### 使いこなしサポート

- 調整手順ガイドを拡充
- カスタム作例の紹介
