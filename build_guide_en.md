# Pangaea Keyboard Build Guide

This is a build guide for assembling the Pangaea Keyboard.

The intended audience will be those who have assembled keyboard kits before.  If you have never assembled a keyboard kit or are not confident about assembling one, please expand the "Tips" section and check it out.
The concept of the Pangaea keyboard is explained in [White Paper](whitepaper_en.md).
The firmware is described in the [Firmware](#Firmware) section, and the QMK Firmware source code is available [here](firmware/).
The Pangaea Keyboard has a wide variety of optional features that allow you to select the configuration of your choice.  This build guide describes the assembly procedure for a standard configuration.

* note:  Please refer to [Optional Features](#Optional Features) for more information on optional features.

## Index
- [Pangaea Keyboard Build Guide](#pangaea-keyboard-build-guide)
  - [Index](#index)
  - [Preparation](#preparation)
    - [Understanding the structure](#understanding-the-structure)
    - [Configuration options](#configuration-options)
    - [Identification of required parts](#identification-of-required-parts)
  - [Assembly](#assembly)
    - [Assemble the movable Bottom Plate](#assemble-the-movable-bottom-plate)
    - [Assemble the Main Module](#assemble-the-main-module)
    - [小指モジュールの組み立て](#小指モジュールの組み立て)
    - [親指モジュールの組み立て](#親指モジュールの組み立て)
    - [キースイッチの取り付け](#キースイッチの取り付け)
    - [モジュールの合体](#モジュールの合体)
  - [ファームウェア](#ファームウェア)
    - [ファームウェアの書き込み](#ファームウェアの書き込み)
    - [動作確認](#動作確認)
  - [仕上げ](#仕上げ)
    - [ゴム足の取り付け](#ゴム足の取り付け)
    - [キーキャップの取り付け](#キーキャップの取り付け)
    - [TRRSケーブルの接続](#trrsケーブルの接続)
    - [完成！](#完成)
  - [調整](#調整)
    - [キー配列の調整](#キー配列の調整)
    - [キーマップの変更](#キーマップの変更)
  - [オプション機能](#オプション機能)
    - [Kailh Choc v1スイッチの使用](#kailh-choc-v1スイッチの使用)
    - [スイッチソケットを使用せずキースイッチを直接PCBにはんだ付けする](#スイッチソケットを使用せずキースイッチを直接pcbにはんだ付けする)
    - [高さの調整](#高さの調整)
    - [チルトとテント](#チルトとテント)
    - [テープLEDの追加](#テープledの追加)
    - [数字行の削除](#数字行の削除)
    - [ロータリーエンコーダーの実装](#ロータリーエンコーダーの実装)
    - [ロータリーエンコーダーの削除](#ロータリーエンコーダーの削除)
    - [拡張キーの削除](#拡張キーの削除)
    - [マイコンボード周辺部分の切り離し](#マイコンボード周辺部分の切り離し)
    - [互換モジュールの使用](#互換モジュールの使用)
  - [さらなる改造](#さらなる改造)
    - [キーの追加](#キーの追加)
    - [ロータリーエンコーダの追加](#ロータリーエンコーダの追加)
    - [OLEDディスプレイの追加](#oledディスプレイの追加)



## Preparation

This section describes the preparations to be made prior to assembly operations.

Preparation > Assembly > Firmware > Finishing > Adjustments (> Optional Features > Further Modifications)

* Understanding the structure
* Configuration options
* Identification of required parts

### Understanding the structure

First, the structure and terminology.  When the engraved side of the keycap is facing up, the upper side is defined as the front side and the lower side as the back side.

The photo shows the keyboard assembled.

<img src="images/DSCF8426.jpg" style="zoom: 60%;" />

One of the most unique features of the Pangaea Keyboard is the ability to move the positions of the thumb and pinky plates  Not only can you assign what keys to what switches in the software, but you can also adjust the physical key layout.  For example, you can adjust the position of the thumb to shift slightly, or adjust the angle slightly to fit your finger.

The Pangaea Keyboard is divided into three modules of parts for its mechanical adjustment mechanism.

* The largest one in the center is defined as the Main Module.
* The vertical rectangles at the left and right ends are defined as Pinky Modules.
* The lower arc-shaped one is defined as Thumb Module.
* The plate with an open slit between them is defined as Bridge Plate.

In addition, the modules are connected by cables to transmit electrical signals between them.

<img src="images/DSCF8428.jpg" style="zoom:60%;">

### Configuration options

The Pangaea keyboard has a variety of optional features.  This build guide describes the assembly procedure for a standard configuration.  

*note: For more information on optional features, please refer to [Optional Features](#Optional Features).

The standard configuration described in this build guide is as follows,

* [x] Use MX compatible switches-
* [x] Use switch sockets
* [x] Use through-hole diodes
* [x] LEDs (optional)
* [x] Rotary encoder (optional)
* [x] ProMicro soldered directly to PCB with pin headers
* [x] Use a vertically orientedreset switch
* [x] Use pre-built VIA-compatible firmware
* [x] Use five thumb keys
* [x] Do not separate the number line, rotary encoder, expansion keys, or ProMicro section.

* note: If you choose an option that differs from the standard configuration, please read the assembly instructions properly before proceeding.

### Identification of required parts

| Category                                                  | # | comment                                                     |
| ----------------------------------------------------- | ---- | ------------------------------------------------------------ |
| --- **PCBs** ---                                      |      |                                                              |
| Main module PCB for left side                         | 1    |                                                              |
| Main module PCB for right side                        | 1    |                                                              |
| Main module switch plate                              | 2    | Common parts for both side                                   |
| Main module bottom plate                              | 2    | Common parts for both side                                   |
| Pinky module PCB                                      | 2    | Common parts for both side                                   |
| Pinky module switch plate                             | 2    | Common parts for both side                                   |
| Pinky module plate                                    | 2    | Common parts for both side                                   |
| Thumb module PCB                                      | 2    | Common parts for both side                                   |
| Thumb module switch plate                             | 2    | Common parts for both side                                   |
| Thumb module bottom plate                             | 2    | Common parts for both side                                   |
| Pinkey bridge palte                                   | 2    | Common parts for both side                                   |
| Thumb bridge plate                                    | 2    | Common parts for both side                                   |
| --- **Electric patrs**---                             |      |                                                              |
| ProMicro or compatible                                | 2    | ATmega32U4                                                   |
| Pin header                                            | 4    | Included with ProMicro                                       |
| Tact switch                                           | 2*   | *It can also be omitted                                      |
| 3.5mm TRRS jack                                       | 2    |                                                              |
| Diodes                                                | 60   |                                                              |
| Switch socket for hotswap                             | 60   |                                                              |
| Cherry MX compatible key switch                       | 60   |                                                              |
| Rotary encoder (potentiometer)                        | 2*   | *It can also be omitted                                      |
| JST SH 4pin reverse cable 10cm length                 | 2*   | Connection between main and rotary encoder, optinal          |
| JST SH 4pin reverse cable 10cm length                 | 2    | Connection between main and pinky module                     |
| JST SH 4pin reverse cable 15cm length                 | 2    | Connection between main and thumb modules                    |
| JST SH 4pin connector, surface mount side type        | 8    |                                                              |
| --- **Screws** ---                                    |      |                                                              |
| M2 double thread hexagonal spacer, 8mm length         | 24   | Supporting switch plates, 12 for one-hand                    |
| M2 double thread hexagonal spacer, 3mm length         | 4    | PCB support around ProMicro, 2 pieces for one-hand           |
| M2 double thread hexagonal spacer, 6mm length         | 8    | Supporting ProMicro covers, 4 pieces for one-hand            |
| M2 screw, 8mm length                                  | 24   | Fixing the bottom plate, 12 for one-handed                   |
| M2 screw, 3mm length                                  | 48   | Fixing the switch plate, PCB and MPU cover, 24 for one-hand  |
| --- **Others** ---                                    |      |                                                              |
| USB cable                                             | 1    | Connection between Pro Micro and your  PC.                   |
| TRRS cable                                            | 1    | Connecttion between the left module and right modules        |
| Key caps                                              | 60   | All 1u size                                                  |
| Rubber foot, 2.2mm thick                              | 10   | Attach to bridge plate                                       |
| Rubber foot, 3.8mm thick                              | 20   | Attach to bottom plate                                       |

Please refer to [Parts List (BOM)](bom_list_en) for detailed model numbers and availability of each part.
Please use JST SH cables with the same pin assignments on both ends, reverse cable.

<img src="images/DSCF8481.jpg" alt="sh-cable" style="zoom:40%;" />

The type and number of components required may vary depending on the option selected.
Please refer to [Optional Features](#Optional Features) for more information about optional features.

Here is a photo of all the circuit boards lined up. Make sure there are no shortages.

<img src="images/plate_all.jpg" alt="all-parts" style="zoom:40%;"/>


* The main module PCB has different parts on the left and right sides.
* The pinky and thumb modules are the same on the right and left hand sides.
* The main module switch plate, main module bottom plate, and bridge plate are the same on the left and right sides, but the orientation used is different
  * Use them in the orientation where the left hand side is the one with the "L" mark when viewed from the **reverse side** and the right hand side is the one with the "R" mark when viewed from the **reverse side**.

## Assembly

Preparation > Assembly > Firmware > Finishing > Adjustments (> Optional Features > Further Modifications)

* [Assemble the movable Bottom Plate](#Assembling the movable bottom plate)
* [Assemble the Main Module](#Assemble main module)
* [Assemble the Pinky Module](#Assemble the pinky module)
* [Assemble the Thumb Module](#Assemble thumb module)
* [Attach key switch](#Attachment of keyswitch)
* [Combine the modules](#module merging)

Even if you make a mistake in the order of assembly, it will not be irreversible. Please proceed with the assembly with ease.

### Assemble the movable Bottom Plate

First, assemble the movable Bottom Plate, which is the best part of the Pangaea Keyboard, the variable mechanism.

Then, attach 8mm screws and 8mm spacers at the positions circled in red. From the back side, stack the screw heads, bridge plate, bottom plate, and spacers in this order.

The finished keyboard will look like the picture below. It contains a mechanism that allows the pinky and thumb modules to be freely adjusted in relation to the main module.  

<img src="images/DSCF8710.jpg" alt="picture 3" style="zoom:67%;" />

The picture below shows it from the back.

<img src="images/DSCF8430.jpg" alt="picture 3" style="zoom:40%;" />

<details>
<summary>Tips: Using washers</summary>
<div>
For smoother operation after assembly, we recommend using washers and spring washers for moving parts. If you screw directly, the screws will loosen easily, and it will be inconvenient to use a screwdriver to screw in the screws for adjustment. By using washers and spring washers, the parts can be moved even when the screws are tightened to some extent, which makes adjustment after assembly easier.

<img src="images/b1e843c930b5d5a4a3331d23bac49f055a0c1e8cba4a9a129905668647902217.jpg" alt="picture 8"/> 
</div>
</details>

*note: The lengths of screws and spacers used for assembly are shown in the figure below.

<img src="images/screw_length.png" alt="picture 3" style="zoom:50%;" />

### Assemble the Main Module

Components are installed on the PCB of each module, starting with Main Module.

Preparation > Assembly > Firmware > Finishing > Adjustments (> Optional Features > Further Modifications)

The following components are installed in the Main module.

* [LED(Option)]
* [SH connector receptacle]
* [Diode]
* [Switch Socket]
* [ProMicro]
* TRRS Jack]
* [Reset Switch (Option)]

#### LED

Solder the LEDs to the **reverse** side of the PCB, with the **glowing side** of the LED facing outward.  The microcontroller-embedded LEDs are sensitive to high temperatures, so lower the soldering iron temperature. 250°C or lower is recommended.

The LEDs are oriented for installation.  Align the diagonally cut leg of the LED terminal with the triangular mark on the PCB (red line). (red line part)

<img src="images/DSCF8468_3.jpg" alt="picture 20" style="zoom: 40%;" /> 

#### SH connector - receptacle

Solder the receptacle of the SH connector to the **back** side of the PCB. This is somewhat difficult, so do it carefully. Attach the connectors for the pinky module and the thumb module, respectively.
If a rotary encoder is used, also solder the SH connector for the rotary encoder.

<img src="images/DSCF8485.jpg" alt="picture 20" style="zoom: 40%;" /> 

#### Diode

Solder the diode to the **back** side of the PCB.

Orient the diode so that the white line on the PCB (or the black line if the PCB is white) aligns with the black line on the diode.

<img src="images/DSCF8441.jpg" alt="picture 20" style="zoom: 40%;" /> 

<img src="images/db102ce236ea3b06e92ff9be887bdc986abb1811367a4291042e3f9954540378.png" alt="picture 5" style="zoom:33%;" />  

When using Surface Mount Device (SMD) diodes, align the wires of the SMD diode with the wires on the PCB. In the example in the photo, the left wire marked T4 is aligned with the wire on the PCB.

![picture 7](images/32ffa581f34b0d646b031b805fd7cc1cc254557058b86134a1ca61366d237566.png)  

This is a view of the Main Module PCB for the left hand side from the back. We will now assemble the left one first.

#### Switch socket

The switch socket is similarly soldered to the **back** side of the PCB.  If Cherry MX compatible switch is used, install the socket on the top side.

<img src="images/DSCF8691_2.jpg" alt="picture 20" style="zoom: 67%;" />

#### Reset switch

Solder from the **Surface** side of the PCB.

#### 3.5mm TRRS jack

Solder from the **Surface** side of the PCB.

#### Pro Micro

Mount the ProMicro on the **front** side of Main Plate PCB with the ProMicro facing down, i.e., the smooth side of the ProMicro is facing up and the side with the various components on it is hidden.

*note: If you want to use the spring pin header, please search for "ProMicro spring pin header". In case of Japan, Yousha Kobo's materials are easy to understand.[コンスルー（スプリングピンヘッダ）の取り付け方を教えて下さい – 遊舎工房サポートサイト (zendesk.com)](https://yushakobo.zendesk.com/hc/ja/articles/360044233974-コンスルー-スプリングピンヘッダ-の取り付け方を教えて下さい)

First, insert the ProMicro supplied pin headers into the PCB. Insert the long one with the short side up.

<img src="images/DSCF8521.jpg" alt="picture 20" style="zoom: 40%;" />

The back side pops out like this.

<img src="images/DSCF8523.jpg" alt="picture 20" style="zoom: 40%;" />

Next, ProMicro is layered on top.

<img src="images/DSCF8525.jpg" alt="picture 20" style="zoom: 40%;" />

Solder the ProMicro and pin headers. Be careful not to bridge the solder with adjacent pins.

<img src="images/DSCF8528.jpg" alt="picture 20" style="zoom: 40%;" />

Then, use nippers to cut the pin headers that stick out on the back side into short pieces, and solder the pin headers to the Pangaea Main Plate PCB.

<img src="images/DSCF8508.jpg" alt="picture 20" style="zoom: 40%;" />

<img src="images/DSCF8530.jpg" alt="picture 20" style="zoom: 40%;" />

*note: When cutting pin headers, be very careful not to let the cut ends fly off.

#### Screw down the standoffs that support the ProMicro

後の工程でボトムプレートに接続されます。
Install M2 3mm screws and M2 3mm spacers at the positions indicated by the light blue circles. This spacer is used to support around the ProMicro on the PCB.  It can be combined with the bottom plate in a later process.

<img src="images/DSCF8538.jpg" alt="picture 20" style="zoom: 50%;" /> 

#### ProMicro cover

Install M2 3mm screws and M2 6mm spacers on the **front** side of the Main Module PCB; insert M2 3mm screws from the backside of the Main Module PCB to secure.
Place the cover plate over the Pro Micro and secure with M2 3mm screws in 4 places.  The plate has two sides, so be sure to align the spacers and cover with each other.

#### Rotary Encoder (Option)

Solder the rotary encoder.
If you use a toray encoder with a push switch, solder the terminals of the switch as well.

<img src="images/DSCF8686.jpg" alt="picture 20" style="zoom: 67%;" /> 

This completes the soldering of the Main Module PCB.

<img src="images/DSCF8691_2.jpg" alt="picture 20" style="zoom: 50%;" />

### 小指モジュールの組み立て

続いて、小指モジュールの組み立てです。

[準備](#準備) > **組み立て** > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )

組み立て > [可動ボトムプレートの組み立て](#可動ボトムプレートの組み立て) > [メインモジュールの組み立て](#メインモジュールの組み立て) > **小指モジュールの組み立て** > [親指モジュールの組み立て](#親指モジュールの組み立て) > [キースイッチの取り付け](#キースイッチの取り付け) > [モジュールの合体](#モジュールの合体)

メインモジュールと同様に、以下の部品をはんだ付けします。

- SHコネクタレセプタクル
- ダイオード
- スイッチソケット

キーの個数分の8個のダイオードが取り付けられているか確認します。個数を数えれば見逃しがないと思います。

<img src="images/DSCF8643.jpg" alt="picture 20" style="zoom: 50%;" />

MX互換スイッチを用いる場合は、PCBに「Pinkey-MX」と書いてある場所にSHコネクタを取り付けます。
※chocスイッチを用いる場合は、「Pinkey-Choc」と書いてある場所にSHコネクタを取り付けてください。

### 親指モジュールの組み立て

最後に親指モジュールを組み立てます。

[準備](#準備) > **組み立て** > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )

組み立て > [可動ボトムプレートの組み立て](#可動ボトムプレートの組み立て) > [メインモジュールの組み立て](#メインモジュールの組み立て) > [小指モジュールの組み立て](#小指モジュールの組み立て) > **親指モジュールの組み立て** > [キースイッチの取り付け](#キースイッチの取り付け) > [モジュールの合体](#モジュールの合体)

メインモジュール、小指モジュールと同様に、以下の部品をはんだ付けします。

- SHコネクタ
- ダイオード
- スイッチソケット

SHコネクタの取り付け位置は2箇所から1つを選択します。どちらに接続しても動作は同じです。
可動範囲をイメージして、ケーブルの取り回しがしやすい方を選択してください。
左手側は表から見て左寄りの位置、右手側は表から見て右寄りの位置にそれぞれ取り付けるのがおすすめです。

はんだ付けが終わると、次の写真のようになります。ダイオードの方向に間違いがないか再度確認してください。

<img src="images/DSCF8652.jpg" alt="picture 20" style="zoom: 50%;" />  

以上で、メイン・小指・親指の三つのPCBプレートが用意できました。

### キースイッチの取り付け

[準備](#準備) > **組み立て** > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )

 組み立て > [可動ボトムプレートの組み立て](#可動ボトムプレートの組み立て) > [メインモジュールの組み立て](#メインモジュールの組み立て) > [小指モジュールの組み立て](#小指モジュールの組み立て) > [親指モジュールの組み立て](#親指モジュールの組み立て) > **キースイッチの取り付け** > [モジュールの合体](#モジュールの合体)

各モジュールのトッププレートにキースイッチを挿入し、キースイッチの足をPCBのソケットに挿しこんで固定します。
ソケットに挿しこむ際にキースイッチの足が曲がらないよう、注意してください。

<img src="images/DSCF8692.jpg" alt="picture 20" style="zoom: 40%;" />  
<img src="images/DSCF8693.jpg" alt="picture 20" style="zoom: 40%;" />  

すべてのスイッチの足が曲がらずにソケットに入っていることを、裏側から観察して確認します。

<img src="images/DSCF8680.jpg" alt="picture 20" style="zoom: 50%;" />  

### モジュールの合体

モジュールを合体していきます。

[準備](#準備) > **組み立て** > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )

 組み立て > [可動ボトムプレートの組み立て](#可動ボトムプレートの組み立て) > [メインモジュールの組み立て](#メインモジュールの組み立て) > [小指モジュールの組み立て](#小指モジュールの組み立て) > [親指モジュールの組み立て](#親指モジュールの組み立て) > [キースイッチの取り付け](#キースイッチの取り付け) > **モジュールの合体**

#### モジュール間の信号接続

プレート同士の信号をSHコネクタを用いて接続します。

メインモジュールにケーブルコネクタを接続します。
ロータリーエンコーダーを取り付けた場合は、ロータリーエンコーダーとProMicroを接続します。
<img src="images/DSCF8714.jpg" alt="-" style="zoom: 33%;" />
ケーブルを絶縁テープ等でPCBに固定します。
<img src="images/DSCF8715.jpg" alt="-" style="zoom: 33%;" />
ケーブルの反対側を小指モジュール、親指モジュールに接続します。
<img src="images/DSCF8716.jpg" alt="-" style="zoom: 33%;" />

あまりワイヤが短いと調整の時に引っ張ってしまって可動域に制約が出たり、ワイヤが切れたりします。少なくとも10cm程度の長さを確保したほうがよいです。余り長くても邪魔になりますのでボトムプレートと組み合わせて確認してみるとよいと思います。

<details>
<summary>Tips: ケーブルの整理</summary>
<div>
ケーブルがPCBとボトムプレートの間にうまく収まらない場合は、テープでケーブルをPCBに固定してからボトムプレートを組み立ててください。
<img src="images/DSCF8550.jpg" alt="-" style="zoom: 33%;" />
</div>
</details>

#### ボトムプレートとの結合

いよいよ、PCBとボトムプレートを統合していきます。スイッチがついたメインモジュール、親指モジュール、小指モジュールをボトムプレートの上に乗せてトッププレートの上からM2 3mmネジで固定します。

まず、メインモジュールをボトムプレートに取り付けます。

ボトムプレートのスペーサーをPCBの穴に通しやすくするため、ボトムプレートのネジを少し緩めてから重ねます。<br/>
斜めにならず隙間なく重なったらスイッチプレートの表面からネジを入れて締めます。<br/>
ネジを締めたら、先ほど緩めたボトムプレートの側のネジを締めなおします。<br/>
固定箇所は4箇所です。

<img src="images/DSCF8717.jpg" alt="-" style="zoom: 33%;" />

小指モジュール、親指モジュールも同様にM2 3mmのネジで固定します。<br/>
固定箇所はそれぞれ4箇所です。

<img src="images/DSCF8718.jpg" alt="-" style="zoom: 33%;" />

裏側です。

<img src="images/DSCF8719.jpg" alt="-" style="zoom: 33%;" />

また、ボトムプレートとProMicroを支える足もM2 3mmのネジで固定します。ボトムプレートの下からM2 3mmのネジで2箇所を固定します。

右手側も同様に結合します。

<img src="images/DSCF8720.jpg" alt="-" style="zoom: 33%;" />

## ファームウェア

ファームウェアを書き込み、動作確認をします。

[準備](#準備) > [組み立て](#組み立て) > **ファームウェア** > [仕上げ](#仕上げ) > [調整](#調整) ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造))

* [ファームウェアの書き込み](#ファームウェアの書き込み)
  * [QMK Toolboxを使って書き込む](#QMK Toolboxを使って書き込む)
  * [QMKコマンドを使って書き込む](#QMKコマンドを使って書き込む)

* [動作確認](#動作確認)

この状態でファームウェアを書き込んで動作を確認します。自信がある方はここをスキップして、完成してから実施しても構いません。

### ファームウェアの書き込み

下記いずれかの方法でファームウェアを書き込みます。

hexはremapからダウンロードしてください。

#### QMK Toolboxを使って書き込む

QMK Toolboxを使います。

QMK Toolboxでhexファイルを開きます。
キーボードを接続します。

リセットスイッチを押して、キーボードをブートローダーモードで再起動します。<br/>
成功してブートローダモードに入ると、QMK Toolboxに「～device connected」というメッセージが表示されます。

もしリセットスイッチを押してもブートローダモードにならない場合は、リセットスイッチを素早く2回押してみてください。

QML Toolboxの「Flush」ボタンをクリックします。<br/>
USBケーブルを抜かずに待機します。<br/>
QMK Toolboxの画面に成功の旨が表示されたら、書き込み成功です。USBケーブルを抜くことができます。

続いて、もう一つのPro Microにも同じ方法でファームウェアを書き込みます。
左右でファームウェアの違いはありません。

#### QMKコマンドを使って書き込む

QMK の directory に移動してから、

```sh
cd qmk_firmware
```

ProMicro に firmware を書き込みます。Compileも一緒に行います。

```sh
qmk flash -kb pangaea -km default
```

### 動作確認

ファームウェアの書き込みが完了したら、USBケーブルを抜いてから左右をTRRSケーブルで接続し、左側にだけUSBケーブルを接続します。<br/>
PCとキーボードをUSBケーブルで接続した状態でTRRSケーブルを抜き差ししないでください。TRRSジャックの端子がショートして、キーボードが故障する可能性があります。

PCで各キーの動作を確認します。

一部のスイッチが入力できないなど問題があればハンダ付けをよく確認してください。一部のキーだけが入力できない場合、原因として下記のようなことが考えられます。

- ダイオードが取り付けられていない
- ダイオードの方向が逆に取り付けられている
- スイッチソケットを逆に取り付けていて、そもそもスイッチが刺さっていない
- スイッチソケットのハンダ付けが不十分で、接触不良
- スイッチの足が折れていて、正常にスイッチソケットに刺さっていない

そんなミスするわけない！と思うかもしれませんが、よく見てみましょう。

動作確認が終わったら、USBケーブルとTRRSケーブルを取り外してから、残りの組み立て作業に戻ります。

## 仕上げ

最後の仕上げをします。

[準備](#準備) > [組み立て](#組み立て) > [ファームウェア](#ファームウェア) > **仕上げ** > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )

* [ゴム足の取り付け](#ゴム足の取り付け)
* [キーキャップの取り付け](#キーキャップの取り付け)
* [TRRSケーブルの接続](#trrsケーブルの接続)

### ゴム足の取り付け

ボトムプレートの裏側にゴム足を貼り付けます。ゴム足の厚さは3.8mmがキーボード全体に余計な厚みが出ないベストなサイズです。

ゴム足の位置に決まりはありませんが、写真のようにプレートの四隅に貼り付けるとバランスが取れて良いでしょう。

<img src="images/rubber-feet.jpg" alt="rubber-feet" style="zoom: 15%;"/>

可動範囲を確認しながら、可動の邪魔にならない位置に貼り付けてください。
以下は、v.1.2の例です。

<img src="images/DSCF7427.jpg" alt="picture 20" style="zoom: 67%;" />  

さらなる安定を求める場合は、ブリッジプレートに2.2mm厚のゴム足を追加してください。
1.6mm厚のブリッジプレートと2.2mm厚のゴム足を合計した高さが、ちょうどボトムプレートの3.8mm厚のゴム足と同じ高さになります。

<img src="images/DSCF7428.jpg" alt="picture 20" style="zoom: 67%;" />  

### キーキャップの取り付け

キーキャップをはめます。ロータリーエンコーダーを取り付けた場合はノブもはめます。

### TRRSケーブルの接続

左右のキーボードをTRRSケーブルで接続します。

必ずキーボードとPCをUSBケーブルで接続する前にTRRSケーブルを接続してください。
また、必ずキーボードとPCの接続を外してからTRRSケーブルを抜くようにしてください。
キーボードとPCをUSBケーブルで接続したままTRRSの抜き差しをすると、TRRS端子がショートして故障の原因になる可能性があります。

### 完成！

完成です。お疲れ様でした！

Polycaps Sealsを取り付けたときの様子です。

<img src="images/DSCF8724.jpg" alt="-" style="zoom: 67%;" />

DROP の MT3 Black を取り付けたときの様子です。

![picture 9](images/60b84ec0d109d0ff8fc8ae6644fc2632dbbb4cfb449918cca01a9c03fa35eddc.jpg)  

## 調整

物理的なキー配列と、ソフトウェア的なキーマップを調整します。

[準備](#準備) > [組み立て](#組み立て) > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > **調整**  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造))

* [キー配列の調整](#キー配列の調整)
* [キーマップの変更](#キーマップの変更)

### キー配列の調整

Pangaea keyboard の価値の一つは位置を調整できることです。好きなように調整してください、なのですが、自由度が高すぎても困ると思いますので私の例で説明します。

私の調整した結果を例として写真を掲載します。[PHOTO]

#### メインモジュールの調整

またx軸、y軸方向の調整として左右のメインプレート間の調整用にscaleが用意されています。ある程度固定次第長さに切って使用するとよいでしょう。
[PHOTO]

- 左右の間隔調整
- 左右の角度調整

#### 親指モジュールの調整

親指モジュールは、横方向の位置と回転角度を調整できます。
調整可能範囲は、横位置は±0.0U～+1U、回転は親指先側が下に回る方向に0°～30°です。

#### 小指モジュールの調整

小指プレートは、縦方向の位置と回転角度を調整できます。

調整可能範囲は、縦位置は+0.25U～-1.25U、回転は上側が外に回る方向に0°〜18°です。

### キーマップの変更

上記手順で書き込んだファームウェアは、VIAおよび[Remap (remap-keys.app)](https://remap-keys.app/)によるキーマップ変更に対応しています。

各ソフトの説明にしたがってキーマップを設定してください。

RemapのキーボードカタログにおけるPangaeaのページはこちらです。[Pangaea - Remap](https://remap-keys.app/catalog/t9RGwMnHCRjLxs937jxh)

## オプション機能

標準キットのオプション機能を説明します。

[準備](#準備) > [組み立て](#組み立て) > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > **オプション機能** > [さらなる改造](#さらなる改造))

* [Kailh Choc v1スイッチの使用](#Kailh-Choc-v1スイッチの使用)
* [スイッチソケットを使用せずキースイッチを直接PCBにはんだ付けする](#スイッチソケットを使用せずキースイッチを直接PCBにはんだ付けする)
* [高さの調整](#高さの調整)
* [チルトとテント](#チルトとテント)
* [テープLEDの追加](#テープledの追加)
* [数字行の削除](#数字行の削除)
* [ロータリーエンコーダーの実装](#ロータリーエンコーダーの実装)
* [ロータリーエンコーダーの削除](#ロータリーエンコーダーの削除)
* [拡張キーの削除](#拡張キーの削除)
* [マイコンボード周辺部分の切り離し](#マイコンボード周辺部分の切り離し)
* [互換モジュールの使用](#互換モジュールの使用)

### Kailh Choc v1スイッチの使用

追加で必要な部品：Kailh Choc v1スイッチ用ソケット、Kailh Choc v1スイッチ

MX互換スイッチを使用する場合と比べて、次の点が変わります。

* ソケットの種類、取り付け向き

* 使用するスペーサー、ネジの長さ

### スイッチソケットを使用せずキースイッチを直接PCBにはんだ付けする

キースイッチの足とPCBの穴の間にはんだを大量に流し込むことで、スイッチソケットを使用せずにキースイッチを付けることができます。

スイッチプレートをつけ忘れないよう注意してください。

### 高さの調整

スペーサーの長さを変えることで、モジュールごとに高さを調整できます。

例えば、メインモジュールと小指モジュールのスペーサーを長いものに変更すると、親指モジュールだけを相対的に低くすることができます。

また、z軸方向はスタンドオフの長さをメインプレートに比べて少し低くするといった工夫も可能です。親指プレートだけ choc にしてメインプレートに対して高さを抑えることもできます。例です。rev.2[PHOTO ]

### チルトとテント

高さの調整の応用です。長さの異なるスペーサーを組み合わせることで、各モジュールのチルト、テント角度の調整ができます。

例えば、メインプレートはz軸方向の高さ調整が可能です。中心方向の2本のスタンドオフを高くし、中心に向かってチルトさせることができます。

PCBやプレートに負荷がかかるので、ネジを強く締めすぎないように気を付けてください。

### テープLEDの追加

追加で必要な部品 ：テープLED

テープLEDを追加できます。NeoPixcelの代わりにテープLEDを追加することも、NeoPixelとテープLEDの両方を実装することもできます。

標準ファームウェアでは6個のLEDを使用できます。テープLEDを使用するときはLEDが6個になるようにテープLEDを切断して使用してください。

### 数字行の削除

メインモジュール、小指モジュールのキー数を4行から3行に変更できます。
行を減らすには、スイッチプレートおよびPCBを切断します。

元に戻せないので慎重に判断してください。

### ロータリーエンコーダーの実装

ロータリーエンコーダーを使えるようにします。SHコネクタでProMicroの裏とロータリーエンコーダーを接続します。

### ロータリーエンコーダーの削除

メインモジュールのロータリーエンコーダーを削除できます。
ロータリーエンコーダーを削除するには、スイッチプレート、PCB、およびボトムプレートを切断します。

元に戻せないので慎重に判断してください。

### 拡張キーの削除

メインモジュールのロータリーエンコーダーの隣にある拡張キーを削除できます。
拡張キーを削除するには、スイッチプレート、PCB、およびボトムプレートを切断します。

拡張キーを削除するとロータリーエンコーダーも同時に削除されます。
ロータリーエンコーダーを使用して拡張キーを使用しない場合は、拡張キーを切り離さずにキースイッチを取り外す等で対応してください。

元に戻せないので慎重に判断してください。

### マイコンボード周辺部分の切り離し

メインモジュールにある Pro Micro 部分は切り離すことができます。内側にキーを追加したい場合やトラックボールを配置するなどこの部分が邪魔になる場合は切り離して、メインプレートとワイヤで配線することで別の場所に移動することができます。

[Photo]()

1. 切り離し
2. メインプレートとマイコンボードの配線

 ###  互換モジュールの使用

各モジュールをPangaea keyboardと同じ規格で設計された物に入れ替えたり、モジュールを追加したりできます。

将来、モジュールの最も外側のキーが下方向に下がった部品も用意される予定です。

自分で互換モジュールを設計することも可能です。

※ 互換モジュールの設計については、「設計者向けガイド（執筆中）」を参照してください。不明点等はPangaea開発チームに問い合わせてください。

## さらなる改造

標準キット外の基板を用いた改造について説明します。

[準備](#準備) > [組み立て](#組み立て) > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整
](#調整)  ( > [オプション機能](#オプション機能) > **さらなる改造**)

単純にテキスト入力だけなら標準キットで十分ですが、特定のアプリケーションやWeb会議などやはり専用のキーが欲しくなってりする場面が出てくると思います。
Pangaea は自由に拡張でき、かつ接続の標準インタフェースを定めているためパーツの交換が容易にできます。

ここではキーの追加、Rotary Encoder,OLED, Joy Stick, Dial switch の追加方法について説明します。

Pangaea の設計者は e3w2q さんです。e3w2qさんの有名な作品にSU120があります。SU120 と組み合わせることで Function key や Rotary Encoder などを追加することができます。

作例はこちらです。Rev.2 での様子です。
[photo]

### キーの追加

キーを追加する方法です。

1. SU120を利用してキーの追加
2. QMK Firmware の対応

### ロータリーエンコーダの追加

ロータリーエンコーダを追加する方法です。

1. SU120を利用してロータリーエンコーダの追加
2. QMK Firmware の対応

### OLEDディスプレイの追加

OLEDディスプレイを追加する方法です。

1. OLEDディスプレイの取り付け
2. QMK Firmware の対応

---

以上。

[目次](#目次) > [準備](#準備) > [組み立て](#組み立て) > [ファームウェア](#ファームウェア) > [仕上げ](#仕上げ) > [調整](#調整)  ( > [オプション機能](#オプション機能) > [さらなる改造](#さらなる改造) )
