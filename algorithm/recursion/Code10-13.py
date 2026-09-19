import matplotlib.pyplot as plt
from matplotlib.patches import Circle

def draw_circle(ax, x, y, r):
    # 중심이 (x, y), 반지름이 r인 실제 원
    circle = Circle(
        (x, y),
        r,
        fill=False,
        edgecolor="green",
        linewidth=1.5
    )
    ax.add_patch(circle)

    # 반지름이 8 이상이면 왼쪽·오른쪽에 작은 원을 재귀로 그림
    if r >= 8:
        draw_circle(ax, x - r / 2, y, r / 2)
        draw_circle(ax, x + r / 2, y, r / 2)


fig, ax = plt.subplots(figsize=(10, 4))

draw_circle(ax, 64, 64, 64)

ax.set_xlim(0, 128)
ax.set_ylim(0, 128)
ax.set_aspect("equal")  # 원이 타원이 되지 않도록 설정
ax.set_facecolor("black")

plt.show()