---

# C++/CLI 프로젝트 생성 및 설정 가이드

이 가이드는 Visual Studio에서 C++/CLI 프로젝트를 설정하고, Windows Forms 애플리케이션을 만드는 방법을 설명합니다. 아래 단계에 따라 프로젝트를 설정할 수 있습니다.

## 1. Visual Studio 설치 및 필요한 구성 요소 선택

Visual Studio Installer에서 다음 옵션들을 선택하여 설치합니다:

- **.NET Multi-Platform App UI 개발(.NET Multi-Platform App UI development)**
- **.NET 데스크톱 개발(.NET desktop development)**
- **C++를 사용한 데스크톱 개발(Desktop development with C++)**

### 추가 설정

- **C++를 사용한 데스크톱 개발(Desktop development with C++) -> C++/CLI support for v143 build tools**를 선택합니다.

## 2. 프로젝트 설정

### 새 Windows Form 추가

1. **프로젝트 추가** -> **새 항목** -> **Visual C++** -> **UI** -> **Windows Form**을 선택합니다.

### 링커 설정

프로젝트 속성에서 다음 항목들을 설정합니다:

1. **링커** -> **시스템** -> **하위 시스템**: `창 (/SUBSYSTEM:WINDOWS)`로 설정합니다.
2. **링커** -> **고급** -> **집입점**: `main`으로 설정합니다.

### 에러 해결

- **디자이너를 로드하기 전에 데이터가 손실되지 않게 하려면 다음 오류를 해결해야 합니다.**라는 오류가 발생할 경우, Visual Studio를 재시작하여 문제를 해결할 수 있습니다.

## 3. 코드 작성

`MainForm.cpp` 파일에서 아래와 같이 코드를 작성합니다:

```cpp
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project_name::MainForm form; // Project_name = Your Project Name, MainForm = Your Form Name
    Application::Run(% form);
}
```

여기서, `Project_name`은 당신의 프로젝트 이름으로, `MainForm`은 당신이 생성한 폼의 이름으로 변경해야 합니다.

---

# **면책 조항(Disclaimer)**
### English
By using this code, the author bears no responsibility for any issues that may arise. The usage of this code is at the user's discretion, and any consequences resulting from it are solely the responsibility of the user. The author assumes no liability for any outcomes or damages incurred from the use of this code. The user absolves the author of any accountability for losses or damages resulting from the usage of this code. By using this code, the user agrees to the following terms and acknowledges being sufficiently warned of any potential risks associated with its use:

1. **Freedom of Use:** The usage of the code is at the user's discretion, and the author imposes no restrictions.
2. **Responsibility:** The user bears sole responsibility for any issues arising from the use of the code.
3. **Consequences of Usage:** The author disclaims all responsibility for any outcomes resulting from the use of the code.
4. **Liability Waiver:** The user holds the author harmless from any losses or damages resulting from the usage of the code.

### Korean
이 코드를 사용함으로써 발생하는 어떤 문제에도, 작성자는 일체의 책임을 지지 않습니다. 코드를 사용하는 것은 사용자의 자유이며, 이로 인해 발생하는 모든 문제에 대한 책임은 오로지 사용자에게 있습니다. 이 코드를 사용함으로써 발생하는 어떠한 결과에도 작성자는 일체의 책임을 지지 않으며, 이 코드를 사용함으로써 발생하는 어떠한 손실이나 손해에 대해 사용자는 작성자를 책임 지지 않습니다. 이 코드를 사용함으로써 사용자는 다음 사항에 동의하며, 이 코드를 사용함으로써 발생할 수 있는 모든 위험에 대해 충분히 경고받았음을 인지해야 합니다:

1. **자유로운 사용**: 코드를 사용하는 것은 사용자의 자유이며, 작성자는 사용 제약을 가하지 않습니다.
2. **책임의 귀속**: 코드 사용으로 발생하는 모든 문제에 대한 책임은 오로지 사용자에게 있습니다.
3. **코드 사용의 결과**: 작성자는 코드 사용으로 발생하는 모든 결과에 대해 일체의 책임을 지지 않습니다.
4. **손실 또는 손해에 대한 면책**: 사용자는 코드 사용으로 발생하는 어떠한 손실이나 손해에 대해 작성자를 책임 지지 않습니다.
