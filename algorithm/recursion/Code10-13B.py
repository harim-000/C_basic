import matplotlib.pyplot as plt
from matplotlib.patches import Polygon

def draw_triangle(ax, x, y, size):
    # size가 충분히 작아지면 채워진 삼각형을 그림
    if size < 10:
        triangle = Polygon(
            [(x, y), (x + size, y), (x + size / 2, y + size)],
            closed=True,
            facecolor="skyblue",
            edgecolor="white"
        )
        ax.add_patch(triangle)

    else:
        # 왼쪽 아래 작은 삼각형
        draw_triangle(ax, x, y, size / 2)

        # 오른쪽 아래 작은 삼각형
        draw_triangle(ax, x + size / 2, y, size / 2)

        # 위쪽 작은 삼각형
        draw_triangle(ax, x + size / 4, y + size / 2, size / 2)


fig, ax = plt.subplots(figsize=(8, 7))

draw_triangle(ax, 0, 0, 128)

ax.set_aspect("equal")
ax.set_xlim(0, 128)
ax.set_ylim(0, 128)
ax.set_facecolor("black")
ax.axis("off")

plt.show()