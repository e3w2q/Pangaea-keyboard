# Pangaea

## what's pangaea?

### 何なのか

キーレイアウトをいくつかの "島" に切り離し、それぞれの島の位置を自由に移動できるようにしたキーボードです。
![Abstract](doc/WhitePaper_Abst1.jpg)

### 何ができるのか

島を動かすことで、個人の好みや手の形（癖、体型）に合わせてキー配置を調整できます。

## why pangaea?

何のために作られたのか

### 原体験 (by otahinosame)

カラムスタッガード配列のキーボードはいろいろあるが、気になる違いは小指の高さと親指のキーの位置。しかし、どれが自分に合うかは試してみないとわからない。数万円かけて作らないと実使用上のテストはできない。せめてどれくらいの高さが合うか確かめてからKitを買いたい。（局所解を避けたい、せっかく買ったのだからバイアスを避けたい、実際に比較して決めたい）

 ### 欲求

使用しながら気軽に調整できるキーボードが欲しい。キー配置を調整できるキーボードを簡単に作れるKitが欲しい。
みんなも欲しいはず！
…という経緯で開発に至りました。

## how pangaea works?

どうなっているのか

- 島と島の相対位置は、接続パーツで連結。自由に可動・固定ができます。

![MechanicalConnectionSummary](doc/WhitePaper_Mech1.jpg)
![MechanicalConnectionDetail](doc/WhitePaper_Mech2.jpg)

- 島を繋ぐ配線はジャンパワイヤ。結線したままで自由に動かせます。

![ElectricalConnectionSummary](doc/WhitePaper_Ele1.jpg)

- 島を繋ぐ配線はキーマトリクス配線そのもの。自由に置き換え・拡張ができます。
- 左右分離型, 左右間はTRS/TRRSケーブルで接続します。
- Pangaea標準インターフェイスを実装した基板であれば、なんでも接続可能です。
    - SU120、te96 を使った追加のキー、ロータリーエンコーダー
    - トラックボール（検証中）

![AdditionalElement](doc/WhitePaper_Add1.jpg)

詳しくは標準仕様をチェックしてください。see: [specification](pangaea-specification-1.0.md)

## where pangaea going?

今後の展望

### ハードウェアの展望

- レイアウトの異なるパーツのバリエーション
- ロウ・スタッガード配列
- オーソリニア

### 使いこなしサポート

- 調整手順ガイドを拡充
- カスタム作例の紹介