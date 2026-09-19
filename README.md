# C_basic

C++ 입문 및 알고리즘 개념 학습을 위한 실습 코드와 관련 자료를 정리한 저장소입니다.

## 학습 환경

Visual Studio Code에서 다음 확장을 사용해 실습 코드를 작성하고 실행합니다.

- **C/C++**: C++ 실습 코드 작성, 빌드 및 디버깅
- **Jupyter**: Python 실습 코드 실행 및 결과 시각화

## 설치된 VS Code 확장

### 주요 확장

| 확장 | 확장 ID | 용도 |
| --- | --- | --- |
| C/C++ | `ms-vscode.cpptools` | C/C++ 코드 분석, 빌드 및 디버깅 |
| Python | `ms-python.python` | Python 실행 및 디버깅 환경 제공 |
| Pylance | `ms-python.vscode-pylance` | Python 자동 완성, 타입 검사 및 코드 분석 |
| Jupyter | `ms-toolsai.jupyter` | Notebook 및 Interactive Window 실행 |
| Jupyter PowerToys | `ms-toolsai.vscode-jupyter-powertoys` | Jupyter Notebook 작업 편의 기능 제공 |

### 함께 설치된 보조 확장

- `ms-python.debugpy`: Python 디버거
- `ms-python.vscode-python-envs`: Python 가상환경 탐색 및 관리
- `ms-toolsai.jupyter-keymap`: Jupyter 단축키 지원
- `ms-toolsai.jupyter-renderers`: Notebook 출력 렌더링
- `ms-toolsai.vscode-jupyter-cell-tags`: Notebook 셀 태그 지원
- `ms-toolsai.vscode-jupyter-slideshow`: Notebook 슬라이드 쇼 지원

> 위 보조 확장 중 일부는 Python 또는 Jupyter 확장을 설치할 때 의존성으로 함께 설치됩니다.

## 사용 방법

### C++

1. Visual Studio Code에서 C++ 소스 파일을 엽니다.
2. Microsoft의 **C/C++** 확장을 이용해 코드를 빌드하거나 디버깅합니다.

### Python

1. Python 파일 또는 Jupyter Notebook을 엽니다.
2. Microsoft의 **Jupyter** 확장에서 프로젝트의 Python 환경을 선택합니다.
3. 셀을 실행해 코드와 시각화 결과를 확인합니다.

## 컴파일 및 실행 안내

### 경로 설정

이 프로젝트는 GitHub Codespaces의 다음 경로를 기준으로 설정되어 있습니다.

| 항목 | 경로 | 설명 |
| --- | --- | --- |
| 프로젝트 | `/workspaces/C_basic` | 저장소의 최상위 디렉터리 |
| C++ 컴파일러 | `/usr/bin/g++` | C++17 소스 코드 컴파일 |
| Python 가상환경 | `/workspaces/C_basic/.venv/bin/python` | Python 디버깅 및 Jupyter 커널에 권장 |
| Python 기본 인터프리터 | `/home/codespace/.python/current/bin/python3` | 빌드 작업에서 `.py` 파일 실행 |

다른 컴퓨터나 폴더에서 저장소를 사용할 경우 다음 설정의 절대 경로를 해당 환경에 맞게 변경해야 합니다.

- `.vscode/tasks.json`: 빌드 및 실행 명령
- `.vscode/launch.json`: C++ 및 Python 디버깅 설정
- `.vscode/settings.json`: 파일 형식, Python 인터프리터 및 Code Runner 설정
- `.vscode/run-current-file.sh`: 파일 확장자에 따른 C++ 컴파일 및 Python 실행

### 단축키로 빌드 또는 실행

현재 파일을 연 상태에서 `Ctrl+Shift+B`를 누르면 파일 확장자를 기준으로 작업이 선택됩니다.

- `.cpp`, `.cc`, `.cxx`: `g++`로 컴파일
- `.py`: Python 인터프리터로 실행

C++ 파일은 다음 옵션으로 컴파일됩니다.

```bash
/usr/bin/g++ -std=c++17 -g -Wall -Wextra source.cpp -o source
```

컴파일된 실행 파일은 소스 파일과 같은 폴더에 확장자 없이 생성됩니다. 예를 들어 `example.cpp`를 빌드하면 같은 폴더에 `example`이 생성됩니다.

> Python 파일은 C++처럼 `g++`로 컴파일하지 않습니다. 선택한 Python 인터프리터가 `.py` 파일을 직접 실행합니다.

### 디버깅

`F5`는 마지막으로 선택한 디버그 구성을 사용하므로 현재 파일의 언어에 맞는 구성을 선택해야 합니다.

- C++ 파일: **C++: 현재 파일 디버그**
- Python 파일: **Python: 현재 파일 디버그**

Python 파일에서 C++ 디버그 구성을 선택하면 `g++`가 `.py` 파일을 컴파일하려고 시도하면서 `file format not recognized` 오류가 발생합니다.

Jupyter Notebook에서는 오른쪽 위의 **Select Kernel**을 눌러 `/workspaces/C_basic/.venv/bin/python`을 선택합니다.
